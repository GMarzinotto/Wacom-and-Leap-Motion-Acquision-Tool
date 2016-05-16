#pragma once

#include <tchar.h>
#include <msxml6.h>
#include <string>
#include <comutil.h>

using namespace System;

String^ queryNode(_bstr_t path);
String^ queryNode_lang(_bstr_t path);
String^ queryNode_prof(_bstr_t path);
HRESULT ReportParseError(IXMLDOMDocument *pDoc, char *szDesc);
HRESULT CreateAndInitDOM(IXMLDOMDocument **ppDoc);
HRESULT VariantFromString(PCWSTR wszValue, VARIANT &Variant);