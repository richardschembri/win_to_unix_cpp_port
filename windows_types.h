//
//  windows_types.hpp
//
//  Created by Richard Schembri on 2018/05/09.
//  Taken from: https://stackoverflow.com/questions/31129200/large-integer-and-byte-types-in-linux#31129201
//

#ifndef windows_types_h
#define windows_types_h

#include <stdio.h>
#include <stdint.h>
#include "windows_types.h"

typedef uint8_t BYTE;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef int64_t LONGLONG;

typedef union _LARGE_INTEGER {
    struct {
        DWORD LowPart;
        LONG  HighPart;
    };
    struct {
        DWORD LowPart;
        LONG  HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

#endif /* windows_types_h */
