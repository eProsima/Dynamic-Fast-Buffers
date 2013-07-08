#ifndef _DFB_DLL_H_
#define _DFB_DLL_H_

#if defined(_WIN32)
#if defined(DFB_DLL_EXPORT)
#define DFB_DllAPI __declspec( dllexport )
#else
#define DFB_DllAPI __declspec( dllimport )
#endif /* DFB_EXPORT */
#else
#define DFB_DllAPI
#endif /* _WIN32 */

#endif // _DFB_DLL_H_
