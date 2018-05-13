//
//  windows_queryperformance.cpp
//
//  Created by Richard Schembri on 2018/05/09.
//  Taken from: https://www.codeproject.com/questions/617340/int-to-large-integer
//

#include "windows_queryperformance.h"
#include <assert.h>
#include <sys/time.h>


/* Helpful conversion constants. */
static const unsigned usec_per_sec = 1000000;
static const unsigned usec_per_msec = 1000;

bool QueryPerformanceFrequency(LARGE_INTEGER *frequency)
{

    /* Sanity check. */
    assert(frequency != NULL);
    
    /* gettimeofday reports to microsecond accuracy. */
    frequency->QuadPart = usec_per_sec;

    return true;
}

bool QueryPerformanceCounter(LARGE_INTEGER *performance_count)
{
    struct timeval time;
    
    /* Sanity check. */
    assert(performance_count != NULL);
    
    /* Grab the current time. */
    gettimeofday(&time, NULL);
    performance_count->QuadPart = time.tv_usec + /* Microseconds. */
    time.tv_sec * usec_per_sec; /* Seconds. */
    
    return true;
}

