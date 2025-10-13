/***************************************************************
 * Name:      tutorial6Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2025-10-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "tutorial6Main.h"
#include <wx/msgdlg.h>
#include <iostream>
#include <wx/colordlg.h>

//(*InternalHeaders(tutorial6Frame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

