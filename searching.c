#include "searching.h"
#include "tools.h"
#include "comparison.h"
#include <stdio.h>
#include <string.h>


extern const char endSymb;
extern const int sizeInt;


const void* lcmemchr(const void *ptr,
                    int value, size_t num)
{
    const unsigned char *findPtr = (unsigned char*)ptr;
    while( num-- )
        if( *findPtr != (unsigned char)value )
            findPtr++;
        else
            return findPtr;

    return NULL;
}

void* lmemchr(void *ptr, int value, size_t num)
{
    unsigned char *findPtr = (unsigned char*)ptr;
    while( num-- )
        if( *findPtr != (unsigned char)value )
            findPtr++;
        else
            return findPtr;

    return NULL;
}

const char* lcstrchr(const char *str, int character)
{
    if( character == endSymb )
    {
        while( *str++ != endSymb );
        return str - 1;
    }
    while( *str != endSymb )
        if( *str++ == character )
            return str - 1;

    return NULL;
}

size_t lstrcspn(const char *str1, const char *str2)
{
    size_t counter = 0;
    while( *str1 != endSymb )
        if( lcstrchr(str2, *str1) )
            return counter;
        else
        {
            ++str1;
            ++counter;
        }

    return counter;
}

char* lstrpbrk(const char *str1, const char *str2)
{
    while( *str1 != endSymb )
        if( lcstrchr(str2, *str1) )
            return (char*)str1;
        else
            ++str1;

    return NULL;
}


char* lstrrchr(const char *str, int character)
{
    size_t cntr = 1;
    while( *str++ != endSymb )
        ++cntr;

    while( cntr-- )
        if( *str == character )
            return (char*)str;
        else
            --str;

    return NULL;
}

size_t lstrspn(const char *str1, const char *str2)
{
    if( str1 == str2 )
        return lstrlen(str1);

    size_t counter = 0;
    while( *str1 != endSymb )
    {
        if( lcstrchr(str2, *str1) )
            ++counter;
        ++str1;
    }

    return counter;
}

char* lstrstr(const char *str1, const char *str2)
{
    if( str1 == str2 )
        return (char*)str1;

    size_t len2 = lstrlen(str2);
    while( *str1 != endSymb )
    {
        if( !lstrncmp(str1, str2, len2) )
            return (char*)str1;
        ++str1;
    }

    return NULL;
}

char* lstrtok(char *str, const char *delim)
{
    // First function call
    static char *ptrDelim;
    if( str )
    {
        ptrDelim = lstrpbrk(str, delim);
        if( !ptrDelim )
            return NULL;
        *ptrDelim = endSymb;
        return str;
    }

    // Next function call, expect NULL pointer
    char* tempDelim = ptrDelim + 1;
    ptrDelim = lstrpbrk(tempDelim, delim);
    if( !ptrDelim )
            return NULL;
    *ptrDelim = endSymb;
    return tempDelim;

}









