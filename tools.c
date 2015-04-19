#include <stdio.h>
#include "tools.h"

//end-string symbol (analog to standard '\0')
const char endSymb = '~';

// for my processor wordsize == int size, sizeof(void*) == sizeof(int)
const int sizeInt = sizeof(int);

size_t lstrlen(const char *str)
{
    const char *sizeStr = str;
    while( *sizeStr != endSymb )
        ++sizeStr;

    return sizeStr - str;
}

char* tolstr(char *cstr)
{
    char* temp = cstr;
    while( *cstr )
        ++cstr;
    *cstr = endSymb;
    return temp;
}

char* tocstr(char *lstr)
{
    char* temp = lstr;
    while( *lstr != endSymb )
        ++lstr;
    *lstr = '\0';
    return temp;
}

int lprint(char *cstr)
{
    char *temp = cstr;
    tocstr(cstr);
    int sizeStr = printf("%s", temp);
    tolstr(temp);
    return sizeStr;
}

void* lmemset(void *ptr, int value, size_t num)
{
    unsigned char *bytePtr = (unsigned char*)ptr;
    unsigned char tempVal = value;
    while ( num-- )
        *bytePtr++ = tempVal;
    return ptr;
}




