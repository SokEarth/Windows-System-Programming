#ifdef LIBSPEC_EXPORTS
#define LIBSPEC __declspec(dllexport)
#else
#define LIBSPEC __declspec(dllimport)
#endif

#define CALL __cdecl

#ifdef __cplusplus
extern "C"
{
#endif

LIBSPEC VOID CALL ReportError(LPCTSTR, DWORD, BOOL);
LIBSPEC DWORD CALL Options(int, LPTSTR *, LPTSTR, ...);

#ifdef __cplusplus
}
#endif
