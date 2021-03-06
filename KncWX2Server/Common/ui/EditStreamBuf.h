// WGameServer.h : main header file for the PROJECT_NAME application
//

#pragma once

#include "EditLog.h"

namespace EditStream {

	///////////////////////////////////
	// basic_streambuf class, that writes output to a CEditLog
	// Save to be used for output from multiple threads. 
	//
	template <class E, class T = std::char_traits<E>, int BUF_SIZE = 2048 >
	class basic_editstreambuf : public std::basic_streambuf< E, T >
	{
	public:
		basic_editstreambuf( CEditLog* pList );
		virtual ~basic_editstreambuf();
	protected:
		virtual int_type overflow( int_type c = T::eof() );
		virtual int sync();
		virtual std::streamsize xsputn(const char_type* pch, std::streamsize n);

		char_type*	psz;
		CEditLog*		m_pEditLog;		
		CRITICAL_SECTION	m_csLock;
	};

	// Ansi version
	typedef basic_editstreambuf< char >		editstreambuf;
	// Unicode version
	typedef basic_editstreambuf< wchar_t>	weditstreambuf;

	// TCHAR version
#ifdef _UNICODE
#define _teditstreambuf weditstreambuf
#else
#define _teditstreambuf editstreambuf
#endif

	////////////////////////////////////////////////////////////////////////////////
	//
	// IMPLEMENTATION
	//
	//

	template <class E, class T, int BUF_SIZE >
		basic_editstreambuf<E,T,BUF_SIZE>::basic_editstreambuf(
		CEditLog* pLog		
		)
		: std::basic_streambuf<E,T>(), m_pEditLog(pLog)
	{
		psz = new char_type[ BUF_SIZE ];
		setbuf( psz, BUF_SIZE );
		// leave place for single char + 0 terminator
		setp( psz, psz + BUF_SIZE - 2 );
		::InitializeCriticalSection( &m_csLock );
	}

	template <class E, class T, int BUF_SIZE >
		basic_editstreambuf<E,T,BUF_SIZE>::~basic_editstreambuf()
	{
		::DeleteCriticalSection( &m_csLock );
		delete psz;
	}

	template <class E, class T, int BUF_SIZE >
		int basic_editstreambuf<E,T,BUF_SIZE>::sync(
		)
	{
		overflow();
		return 0;
	}

	template <class E, class T, int BUF_SIZE >
		typename std::streamsize basic_editstreambuf<E,T,BUF_SIZE>::xsputn(
		const char_type* pch,
		std::streamsize n
		)
	{
		std::streamsize nMax, nPut;
		::EnterCriticalSection( &m_csLock );
		for( nPut = 0; 0 < n; ) {
			if( pptr() != 0 && 0 < (nMax = epptr() - pptr()) ) {
				if( n < nMax )
					nMax = n;
#ifdef _CONVERT_VS_2010
				traits_type::copy( pptr(), pch, static_cast<size_t>(nMax) );
				// Sync if string contains LF
				bool bSync = traits_type::find( pch, static_cast<int>(nMax), traits_type::to_char_type( '\n' ) ) != NULL;
				pch += nMax, nPut += nMax, n -= nMax, pbump(static_cast<int>(nMax));
#else
				traits_type::copy( pptr(), pch, nMax );
				// Sync if string contains LF
				bool bSync = traits_type::find( pch, nMax, traits_type::to_char_type( '\n' ) ) != NULL;
				pch += nMax, nPut += nMax, n -= nMax, pbump(nMax);
#endif _CONVERT_VS_2010

				if( bSync )
					sync();


			}
			else if (traits_type::eq_int_type(traits_type::eof(),
				overflow(traits_type::to_int_type(*pch))))
				break;
			else
				++pch, ++nPut, --n;
		}
		::LeaveCriticalSection( &m_csLock );
		return (nPut); 
	}

	template <class E, class T, int BUF_SIZE >
		typename basic_editstreambuf< E, T, BUF_SIZE >::int_type basic_editstreambuf< E,T,BUF_SIZE >::overflow(
		int_type c		// = T::eof() 
		)
	{
		::EnterCriticalSection( &m_csLock );
		char_type* plast = pptr();
		if( c != T::eof() )
			// add c to buffer
			*plast++ = c;
		*plast = char_type();

		// Pass text to the edit control
		m_pEditLog->AddText( pbase(), true );
		setp( pbase(), epptr() );

		::LeaveCriticalSection( &m_csLock );
		return c != T::eof() ? T::not_eof( c ) : T::eof();
	}

} // namespace EditStream