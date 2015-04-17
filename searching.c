#include "searching.h"
#include "tools.h"


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






