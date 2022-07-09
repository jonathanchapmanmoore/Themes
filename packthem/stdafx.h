//---------------------------------------------------------------------------
//  StdAfx.h - defines precompiled hdr set 
//---------------------------------------------------------------------------
#ifndef _STDAFX_H_
#define _STDAFX_H_
//---------------------------------------------------------------------------
#define _iswupper(_c)    ( iswctype(_c,_UPPER) )
#define _iswlower(_c)    ( iswctype(_c,_LOWER) )
#define _iswdigit(_c)    ( iswctype(_c,_DIGIT) )
#define _iswxdigit(_c)   ( iswctype(_c,_HEX) )
//---------------------------------------------------------------------------
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
//---------------------------------------------------------------------------
#define STRICT
#define _ATL_NO_ATTRIBUTES
//---------------------------------------------------------------------------
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif

#include <windows.h>
//---------------------------------------------------------------------------
#include "autos.h"
#include "log.h"
#include "errors.h"
#include "utils.h"
//---------------------------------------------------------------------------
#include <atlbase.h> 

#define STRSAFE_LIB
#include <strsafe.h>
//---------------------------------------------------------------------------
#endif //_STDAFX_H_
//---------------------------------------------------------------------------
