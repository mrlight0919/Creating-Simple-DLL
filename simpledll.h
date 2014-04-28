#include<windef.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
//simpledll.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK CenterTextA (HDC hdc, PREC prc, PCSTR pString);
export bool CALLBACK CenterTextW (HDC hdc, PRECT prc, PCWSTR pString);
#ifdef UNICODE
#define CenterText CenterTextW
#define TextOut TextOutW
#else
#define CenterText CenterTextA
#define TextOut TextOutA
#endif
//test.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
