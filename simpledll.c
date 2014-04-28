// This simple DLL project from AshuMeow is about creating a DLL for the Drawing Routine library module
// Not directly copied... The concept of this simple project is inspired from the book of Charles Petzold
#include<windows.h>
#include "simpledll.h"
int WINAPI DllMain(HINSTANCE hInstance, DWORD fdwReason, PVOID pvReserved)
{
	return TRUE;
}
export BOOL CALLBACK CenterTextA (HDC hdc, PRECT prc, LPCSTR pString)
{
	int iLength;
	LPSIZE lpsize;
	iLength= lstrlenA(pString);
	GetTextExtentPoint32A(HDC hdc, PCSTR pString ,int iLength , LPSIZE lpsize);
	return TextOutA (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);
}
export BOOL CALLBACK CenterTextW (HDC hdc, PRECT prc, PCWSTR pString)
	{
	int iLength;
	LPSIZE lpsize;
	iLength= lstrlenW(pString);
	GetTextExtentPoint32W (HDC hdc, LPTCSTR lpString ,int iLength , LPSIZE lpsize);
	return TextOutW (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);
}
