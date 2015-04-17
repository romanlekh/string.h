#include <stdio.h>
#include "tools.h"

//end-string symbol (analog to standard '\0')
const char endSymb = '~';

//for my processor wordsize == int size, sizeof(void*) == sizeof(int)
const int sizeInt = sizeof(int);

int lprint(char *data)
{
    char *temp = data;
    int counter = 0;
    while( *temp != endSymb )
    {
        putchar( *temp++ );
        counter++;
    }
    return counter;
}

size_t lstrlen(const char *str)
{
    size_t sizeStr = 0;
    while( *str++ != endSymb )
        ++sizeStr;
    return sizeStr;
}

void tolstr(char *str)
{
    while( *str )
        ++str;
    *str = endSymb;
}



