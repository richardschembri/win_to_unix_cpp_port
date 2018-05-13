//
//  windows_queryperformance.h
//
//  Created by Richard Schembri on 2018/05/09.
//  Taken from: https://forums.tigsource.com/index.php?topic=6230.0
//

#ifndef windows_queryperformance_h
#define windows_queryperformance_h

#include <stdio.h>
#include "windows_types.h"

bool QueryPerformanceCounter(LARGE_INTEGER *performance_count);
bool QueryPerformanceFrequency(LARGE_INTEGER *frequency);

#endif /* windows_queryperformance_h */


