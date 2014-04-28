#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK CenterTextA (HDC hdc, PREC prcT, PCSTR pString);
export bool CALLBACK CenterTextW (HDC hdc, PRECT prc, PCWSTR pString);
#ifdef UNICODE
#define CenterText CenterTextW
#else
#define CenterText CenterTextA
#endif
