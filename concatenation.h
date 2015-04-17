#ifndef CONCATENATION_H_INCLUDED
#define CONCATENATION_H_INCLUDED

#include <stddef.h>

// Concatenation functions

// Appends a copy of the source string to the destination string.
// The terminating null character in destination is overwritten
// by the first character of source, and a null-character is included
// at the end of the new string formed by the concatenation of both in
// destination.
char* lstrcat(char *destination, const char *source);

// Appends the first num characters of source to destination,
// plus a terminating end-string symbol
char* lstrncat(char *destination, const char *source, size_t num);


#endif // CONCATENATION_H_INCLUDED
