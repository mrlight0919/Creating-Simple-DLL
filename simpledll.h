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
export bool CALLBACK CenterTextA (HDC hdc, PRECT prc, PCSTR pString);
export bool CALLBACK CenterTextW (HDC hdc, PRECT prc, PCWSTR pString);
#ifdef UNICODE
#define CenterText CenterTextW
#define TextOut TextOutW
#else
#define CenterText CenterTextA
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
bool GetTextExtentPoint32A(HDC hdc, LPCTSTR lpString,int iLength, LPSIZE lpsize);

//GetTextExtentPoint32W
bool etTextExtentPoint32W(HDC hdc, LPCTSTR lpString, int iLength , LPSIZE lpsize);

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
TextOutA (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);

//TextOutW
TextOutW (hdc, prc(right - left - size.cx)/2, prc(bottom - top - size.cy)/2, pString, iLength);

//test.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
