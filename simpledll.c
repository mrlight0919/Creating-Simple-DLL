// This simple DLL project from AshuMeow is about creating a DLL for the Drawing Routine library module
// Not directly copied... The concept of this simple project is inspired from the book of Charles Petzold
#include<windows.h>
#include "simpledll.h"
int WINAPI DllMain(HINSTANCE hInstance, DWORD message, PVOID pvReserved)
{
	return TRUE;
}
EXPORT BOOL CALLBACK CenterTextA(HDC hdc, PRECT prc, int iLength, LPCSTR pString)
{
	LPSIZE lpsize;
	iLength= lstrlenA(pString);
	GetTextExtentPoint32A(hdc, lpString, iLength, lpsize);
	return TextOutA (hdc, prc((right-left-size.cx)/2,(bottom-top-size.cy)/2), pString, iLength);
}
EXPORT BOOL CALLBACK CenterTextW(HDC hdc, PRECT prc, int iLength, PCWSTR pString)
	{
	LPSIZE lpsize;
	iLength= lstrlenW(pString);
	GetTextExtentPoint32W(hdc, lpString, iLength, lpsize);
	return TextOutW (hdc, prc((right-left-size.cx)/2,(bottom-top-size.cy)/2), pString, iLength);
}
