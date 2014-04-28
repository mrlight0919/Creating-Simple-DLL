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
#else
#define CenterText CenterTextA
#endif
//test.c
#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
