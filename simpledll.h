#ifdef __cplusplus
#define export extern "C" __declspec (dllexport)
#else
#define export __declspec (dllexport)
#endif
export bool CALLBACK CenterTextA (HDC, PRECT, PCSTR);
export bool CALLBACK CenterTextW (HDC, PRECT, PCWSTR);
#ifdef UNICODE
#define CenterText CenterTextW
#else
#define CenterText CenterTextA
#endif
