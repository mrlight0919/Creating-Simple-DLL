// This simple DLL project from AshuMeow is about creating a DLL for the Drawing Routine library module
// Not directly copied... The concept of this simple project is inspired from the book of Charles Petzold
#include<windows.h>
#include "simpledll.h"
#include<windef.h>
int WINAPI DllMain(HINSTANCE hInstance, DWORD fdwReason, PVOID pvReserved)
{
	return TRUE;
}
export bool CALLBACK CenterTextA(HDC hdc, PRECT prc, PCSTR pString)
{
	int iLength;
	SIZE size;
	iLength=lstrlenA(pString);
	GetTextExtentPoint32A(hdc,pString,iLength,&size);
	return TextOutA(hdc,(prc->right - prc->left - size.cx)/2,(prc->bottom - prc->top - size.cy)/2,pString,iLength);
}
export bool CALLBACK CenterTextW(HDC hdc, PRECT prc, PCSTR pString)
	{
	int iLength;
	SIZE size;
	iLength=lstrlenW(pString);
	GetTextExtentPoint32W(hdc,pString,iLength,&size);
	return TextOutW(hdc,(prc->right - prc->left - size.cx)/2,(prc->bottom - prc->top - size.cy)/2,pString,iLength);
}
