#include "concatenation.h"

extern const char endSymb;

char* lstrcat(char *destination, const char *source)
{
    // copy pointer for normal return destination
    char *dest = destination;
    while( *dest != endSymb )
        dest++;
    while( *source != endSymb )
        *dest++ = *source++;
    *dest = endSymb;

    return destination;
}

char* lstrncat(char *destination, const char *source, size_t num)
{
    // copy pointer for normal return destination
    char *dest = destination;
    while( *dest != endSymb )
        dest++;
    while( num-- )
        *dest++ = *source++;
    *dest = endSymb;

    return destination;
}


