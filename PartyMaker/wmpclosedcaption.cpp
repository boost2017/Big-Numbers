// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "wmpclosedcaption.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPClosedCaption properties

/////////////////////////////////////////////////////////////////////////////
// CWMPClosedCaption operations

CString CWMPClosedCaption::GetSAMIStyle()
{
    CString result;
    InvokeHelper(0x3b7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
}

void CWMPClosedCaption::SetSAMIStyle(LPCTSTR lpszNewValue)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x3b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
         lpszNewValue);
}

CString CWMPClosedCaption::GetSAMILang()
{
    CString result;
    InvokeHelper(0x3b8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
}

void CWMPClosedCaption::SetSAMILang(LPCTSTR lpszNewValue)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x3b8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
         lpszNewValue);
}

CString CWMPClosedCaption::GetSAMIFileName()
{
    CString result;
    InvokeHelper(0x3b9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
}

void CWMPClosedCaption::SetSAMIFileName(LPCTSTR lpszNewValue)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x3b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
         lpszNewValue);
}

CString CWMPClosedCaption::GetCaptioningId()
{
    CString result;
    InvokeHelper(0x3ba, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
    return result;
}

void CWMPClosedCaption::SetCaptioningId(LPCTSTR lpszNewValue)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x3ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
         lpszNewValue);
}