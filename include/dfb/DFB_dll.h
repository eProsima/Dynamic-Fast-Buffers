/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_DFB_DLL_H_
#define _CPP_DFB_DLL_H_

// normalize macros
#if !defined(DFB_DYN_LINK) && !defined(DFB_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define DFB_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(DFB_DYN_LINK)
#define DFB_DYN_LINK
#endif

#if defined(DFB_DYN_LINK) && defined(DFB_STATIC_LINK)
#error Must not define both DFB_DYN_LINK and DFB_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(DFB_NO_LIB)
#define DFB_NO_LIB
#endif

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(DFB_DYN_LINK)
#if defined(DFB_SOURCE)
#define Dfb_DllAPI __declspec( dllexport )
#else
#define Dfb_DllAPI __declspec( dllimport )
#endif // DFB_SOURCE
#else
#define Dfb_DllAPI
#endif
#else
#define Dfb_DllAPI
#endif // _WIN32

// Auto linking.

#if !defined(DFB_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(DFB_NO_LIB)

#include "dfb/DFB_version.h"

// Set properties.
#define EPROSIMA_LIB_NAME dfb

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(DFB_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif

#include "eProsima_cpp/eProsima_auto_link.h"
#endif // auto-linking disabled

#endif // _CPP_DFB_DLL_H_
