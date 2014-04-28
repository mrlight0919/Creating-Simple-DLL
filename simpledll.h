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
#define DWORD fdwReason
#define PVOID pvReserved
#define HDC hdc
#define PRECT prc
#define LPCSTR pString
#define LPCTSTR lpString
#define iLength
#define LPSIZE lpsize
#ifdef UNICODE
#define CenterText CenterTextW
#define TextOut TextOutW
#else
#define CenterText CenterTextA
#define CenterTextA()
#define TextOut TextOutA
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
#define TextOutA (hdc, prc((right-left-size.cx)/2,(bottom-top-size.cy)/2), pString, iLength);

//TextOutW
#define TextOutW (hdc, prc((right-left-size.cx)/2,(bottom-top-size.cy)/2)/2, pString, iLength);
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
#define GetTextExtentPoint32A();

//GetTextExtentPoint32W
#define GetTextExtentPoint32W();


//test.c
#ifdef __cplusplus
#define EXPORT extern "C" __declspec (dllexport)
#else
#define EXPORT __declspec (dllexport)
#endif
#define HWND hwnd
#define UINT message
#define WPARAM wParam
#define LPARAM lParam
//WinMain
#define MSG msg
#define HINSTANCE hPrevInstance
#define PSTR szCmdLine
#define iCmdShow
#define PAINTSTRUCT ps
#define RECT rect
#define GetClientRect()
#define BeginPaint()
#define EndPaint()

