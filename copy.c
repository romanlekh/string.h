#include <stdlib.h>
#include <stdio.h>
#include "copy.h"

extern const int sizeInt;
extern const char endSymb;


void* lbmemcpy(void *destination,
              const void *source, size_t num)
{
    if( destination == source )
        return destination;

    char* dest = (char*)destination;
    const char* src = (const char*)source;
    while( num-- )
        *dest++ = *src++;

    return destination;
}

void* lmemcpy(void *destination,
               const void *source, size_t num)
{
    if( destination == source )
        return destination;

    // Pointers for remained bytes
    char* destByte = (char*)destination;
    const char* srcByte = (const char*)source;

    // Variable for remained bytes
    size_t tempNum = num / sizeInt;

    // Number of "full" bytes (by machine word)
    num -= tempNum * sizeInt;

    // copy remainder after division by sizeof(int)
    while( num--)
        *destByte++ = *srcByte++;

    // Pointers for "full" bytes
    int* destInt = (int*)destByte;
    const int* srcInt = (const int*)srcByte;
    //copy data without remainder
    while( tempNum-- )
        *destInt++ = *srcInt++;

    return destination;
}

void* lmemmove(void *destination,
                const void *source, size_t num)
{
    if(destination == source)
        return destination;

    // cheack overlapping
    if(source < destination &&
       (const char*)source + num > (char*)destination)
    {
        char* buffer = (char*)malloc(num);
        if(buffer == NULL)
            exit(1);
        lmemcpy(buffer, source, num);
        lmemcpy(destination, buffer, num);
        free(buffer);
    }
    else //case without overlap, analog to lmemcpy function
        lmemcpy(destination, source, num);

    return destination;
}

char* lstrcpy(char *destination, const char *source)
{
    if( destination == source )
        return destination;

    // copy pointer, because need to return normal destination
    char* dest = destination;
    // const char* src = source;
    while( *source != endSymb )
        *dest++ = *source++;
    *dest = endSymb;

    return destination;
}

char* lstrncpy(char *destination, const char *source, size_t num)
{
    char* dest = destination;
    const char* src = source;
    for(; num>0; --num)
        *dest++ = *src++;

    return destination;
}









