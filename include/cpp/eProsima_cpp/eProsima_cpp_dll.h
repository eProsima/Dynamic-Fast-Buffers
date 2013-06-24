#ifndef _EPROSIMA_CPP_EPROSIMA_CPP_DLL_H
#define _EPROSIMA_CPP_EPROSIMA_CPP_DLL_H

#if defined(EPROSIMA_WIN32)
#if defined(EPROSIMA_CPP_DLL_EXPORT)
#define eProsima_cpp_DllExport __declspec( dllexport )
#else
#define eProsima_cpp_DllExport
#endif /* EPROSIMA_C_DLL_EXPORT */

#if defined(EPROSIMA_CPP_DLL_VARIABLE) 
#if defined(EPROSIMA_CPP_DLL_EXPORT)
#define eProsima_cpp_DllVariable __declspec( dllexport )
#else
#define eProsima_cpp_DllVariable __declspec( dllimport )
#endif /* EPROSIMA_C_DLL_EXPORT */
#else 
#define eProsima_cpp_DllVariable
#endif /* EPROSIMA_C_DLL_VARIABLE */
#else
#define eProsima_cpp_DllExport
#define eProsima_cpp_DllVariable
#endif /* EPROSIMA_WIN32 */

#if defined(EPROSIMA_LINUX)
#define EPROSIMA_USE_NOEXCEPT _GLIBCXX_USE_NOEXCEPT
#else
#define EPROSIMA_USE_NOEXCEPT
#endif

#endif // _EPROSIMA_CPP_EPROSIMA_C_DLL_H

