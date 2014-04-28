#include<windef.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<wingdi.h>
//simpledll.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif

//DllMain
#define WINAPI
#define HINSTANCE hInstance
#define DWORD fdwReason
#define PVOID pvReserved

#define export bool CALLBACK CenterTextA (HDC hdc, PRECT prc, PCSTR pString);
#define export bool CALLBACK CenterTextW (HDC hdc, PRECT prc, PCWSTR pString);
#ifdef UNICODE
#define CenterText CenterTextW
#define TextOut TextOutW
#else
#define CenterText CenterTextA
#define CenterTextA (HDC hdc, PRECT prc, LPCSTR pString)
#define HDC hdc
#define PRECT prc
#define LPCSTR pString
#define TextOut TextOutA
#endif
/* GetTextExtentPoint32 syntax generated in CPP
BOOL GetTextExtentPoint32(
  _In_   HDC hdc,
  _In_   LPCTSTR lpString,
  _In_   int c,
  _Out_  LPSIZE lpSize
);
*/
//GetTextExtentPoint32A
#define bool GetTextExtentPoint32A(HDC hdc, LPCTSTR lpString,int iLength, LPSIZE lpsize);

//GetTextExtentPoint32W
#define bool etTextExtentPoint32W(HDC hdc, LPCTSTR lpString, int iLength , LPSIZE lpsize);

/* TextOut function in CPP
BOOL TextOut(
  _In_  HDC hdc,
  _In_  int nXStart,
  _In_  int nYStart,
  _In_  LPCTSTR lpString,
  _In_  int cchString
);
*/
//TextOutA
#define prc()
TextOutA (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);

//TextOutW
TextOutW (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);

//test.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
#define export bool CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
//WinMain
#define HWND hwnd
#define MSG msg
#define WNDCLASS wndclass
#define HINSTANCE hInstance
#define HINSTANCE hPrevInstance
#define PSTR szCmdLine
#define int iCmdShow
