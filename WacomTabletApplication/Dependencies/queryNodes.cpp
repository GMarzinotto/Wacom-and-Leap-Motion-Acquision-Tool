#include "queryNodes.h"
#include <stdio.h>
#include <tchar.h>
#include <msxml6.h>
#include <string>

// Macro that calls a COM method returning HRESULT value.
#define CHK_HR(stmt)        do { hr=(stmt); if (FAILED(hr)) goto CleanUp; } while(0)

// Macro to verify memory allcation.
#define CHK_ALLOC(p)        do { if (!(p)) { hr = E_OUTOFMEMORY; goto CleanUp; } } while(0)

// Macro that releases a COM object if not NULL.
#define SAFE_RELEASE(p)     do { if ((p)) { (p)->Release(); (p) = NULL; } } while(0)



// Helper function to create a VT_BSTR variant from a null terminated string. 
HRESULT VariantFromString(PCWSTR wszValue, VARIANT &Variant)
{
	HRESULT hr = S_OK;
	BSTR bstr = SysAllocString(wszValue);
	CHK_ALLOC(bstr);

	V_VT(&Variant) = VT_BSTR;
	V_BSTR(&Variant) = bstr;

CleanUp:
	return hr;
}

// Helper function to create a DOM instance. 
HRESULT CreateAndInitDOM(IXMLDOMDocument **ppDoc)
{
	HRESULT hr = CoCreateInstance(__uuidof(DOMDocument60), NULL, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(ppDoc));
	if (SUCCEEDED(hr))
	{
		// these methods should not fail so don't inspect result
		(*ppDoc)->put_async(VARIANT_FALSE);
		(*ppDoc)->put_validateOnParse(VARIANT_FALSE);
		(*ppDoc)->put_resolveExternals(VARIANT_FALSE);
		(*ppDoc)->put_preserveWhiteSpace(VARIANT_TRUE);
	}
	return hr;
}

// Helper function to display parse error.
// It returns error code of the parse error.
HRESULT ReportParseError(IXMLDOMDocument *pDoc, char *szDesc)
{
	HRESULT hr = S_OK;
	HRESULT hrRet = E_FAIL; // Default error code if failed to get from parse error.
	IXMLDOMParseError *pXMLErr = NULL;
	BSTR bstrReason = NULL;

	CHK_HR(pDoc->get_parseError(&pXMLErr));
	CHK_HR(pXMLErr->get_errorCode(&hrRet));
	CHK_HR(pXMLErr->get_reason(&bstrReason));
	printf("%s\n%S\n", szDesc, bstrReason);

CleanUp:
	SAFE_RELEASE(pXMLErr);
	SysFreeString(bstrReason);
	return hrRet;
}

String^ queryNode(_bstr_t path)
{

	HRESULT hr = S_OK;
	IXMLDOMDocument *pXMLDom = NULL;
	IXMLDOMNode *pNode = NULL;
	std::string ws;

	BSTR bstrQuery = NULL;
	BSTR bstrNodeName = NULL;
	BSTR bstrNodeValue = NULL;
	VARIANT_BOOL varStatus;
	VARIANT varFileName;
	VariantInit(&varFileName);

	CHK_HR(CreateAndInitDOM(&pXMLDom));

	CHK_HR(VariantFromString(L"XML/strings.xml", varFileName));
	CHK_HR(pXMLDom->load(varFileName, &varStatus));
	if (varStatus != VARIANT_TRUE)
	{
		CHK_HR(ReportParseError(pXMLDom, "Failed to load DOM from strings.xml."));
	}

	// Query a single node.
	bstrQuery = SysAllocString(path);
	CHK_ALLOC(bstrQuery);
	CHK_HR(pXMLDom->selectSingleNode(bstrQuery, &pNode));
	if (pNode)	{
		//printf("Result from selectSingleNode:\n");
		CHK_HR(pNode->get_nodeName(&bstrNodeName));
		CHK_HR(pNode->get_xml(&bstrNodeValue));
		SAFE_RELEASE(pNode);
	}
	else { CHK_HR(ReportParseError(pXMLDom, "Error while calling selectSingleNode.")); }

CleanUp:
	String^ ss = gcnew String(bstrNodeValue);
	String^ jj = gcnew String(bstrNodeName);

	SAFE_RELEASE(pXMLDom);
	SAFE_RELEASE(pNode);
	SysFreeString(bstrQuery);
	VariantClear(&varFileName);
	SysFreeString(bstrNodeName);
	SysFreeString(bstrNodeValue);

	ss = ss->Remove(0,jj->Length +2);
	ss = ss->Remove(ss->Length - (jj->Length + 3), jj->Length + 3);

	return ss;
}


String^ queryNode_lang(_bstr_t path)
{

	HRESULT hr = S_OK;
	IXMLDOMDocument *pXMLDom = NULL;
	IXMLDOMNode *pNode = NULL;
	std::string ws;

	BSTR bstrQuery = NULL;
	BSTR bstrNodeName = NULL;
	BSTR bstrNodeValue = NULL;
	VARIANT_BOOL varStatus;
	VARIANT varFileName;
	VariantInit(&varFileName);

	CHK_HR(CreateAndInitDOM(&pXMLDom));

	CHK_HR(VariantFromString(L"XML/strings_languages.xml", varFileName));
	CHK_HR(pXMLDom->load(varFileName, &varStatus));
	if (varStatus != VARIANT_TRUE)
	{
		CHK_HR(ReportParseError(pXMLDom, "Failed to load DOM from strings.xml."));
	}

	// Query a single node.
	bstrQuery = SysAllocString(path);
	CHK_ALLOC(bstrQuery);
	CHK_HR(pXMLDom->selectSingleNode(bstrQuery, &pNode));
	if (pNode)	{
		CHK_HR(pNode->get_nodeName(&bstrNodeName));
		CHK_HR(pNode->get_xml(&bstrNodeValue));
		SAFE_RELEASE(pNode);
	}
	else { CHK_HR(ReportParseError(pXMLDom, "Error while calling selectSingleNode.")); }

CleanUp:
	String^ ss = gcnew String(bstrNodeValue);
	String^ jj = gcnew String(bstrNodeName);

	SAFE_RELEASE(pXMLDom);
	SAFE_RELEASE(pNode);
	SysFreeString(bstrQuery);
	VariantClear(&varFileName);
	SysFreeString(bstrNodeName);
	SysFreeString(bstrNodeValue);

	ss = ss->Remove(0, jj->Length + 2);
	ss = ss->Remove(ss->Length - (jj->Length + 3), jj->Length + 3);

	return ss;
}


String^ queryNode_prof(_bstr_t path)
{

	HRESULT hr = S_OK;
	IXMLDOMDocument *pXMLDom = NULL;
	IXMLDOMNode *pNode = NULL;
	std::string ws;

	BSTR bstrQuery = NULL;
	BSTR bstrNodeName = NULL;
	BSTR bstrNodeValue = NULL;
	VARIANT_BOOL varStatus;
	VARIANT varFileName;
	VariantInit(&varFileName);

	CHK_HR(CreateAndInitDOM(&pXMLDom));

	CHK_HR(VariantFromString(L"XML/strings_professions.xml", varFileName));
	CHK_HR(pXMLDom->load(varFileName, &varStatus));
	if (varStatus != VARIANT_TRUE)
	{
		CHK_HR(ReportParseError(pXMLDom, "Failed to load DOM from strings.xml."));
	}

	// Query a single node.
	bstrQuery = SysAllocString(path);
	CHK_ALLOC(bstrQuery);
	CHK_HR(pXMLDom->selectSingleNode(bstrQuery, &pNode));
	if (pNode)	{
		CHK_HR(pNode->get_nodeName(&bstrNodeName));
		CHK_HR(pNode->get_xml(&bstrNodeValue));
		SAFE_RELEASE(pNode);
	} else { CHK_HR(ReportParseError(pXMLDom, "Error while calling selectSingleNode.")); }

CleanUp:
	String^ ss = gcnew String(bstrNodeValue);
	String^ jj = gcnew String(bstrNodeName);

	SAFE_RELEASE(pXMLDom);
	SAFE_RELEASE(pNode);
	SysFreeString(bstrQuery);
	VariantClear(&varFileName);
	SysFreeString(bstrNodeName);
	SysFreeString(bstrNodeValue);

	ss = ss->Remove(0, jj->Length + 2);
	ss = ss->Remove(ss->Length - (jj->Length + 3), jj->Length + 3);

	return ss;
}