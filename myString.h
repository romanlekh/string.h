#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

/* Prototypes was got from http://www.cplusplus.com/reference/cstring/?kw=string.h
/  Function`s names are similar to C style with prefix 'l' (first letter of my surname).
/  Prefix 'lc' means function with const parameters.
/  If you will find in comments for function expression "C-string", be sure,
/  that I mean "l-string".
/  This header is main and include another logical divided headers.
/
/  All C-strings before using must be convert to l-strings
/  ( by function tolstr() or manually add end-string symbol ).
/
/  For print l-string use function lprint(char*) with converted C-srting.
/
/  Machine word equal 4 bytes and this is rule for all function.
*/

// Variable with end-string symbol, helpful functions
#include "tools.h"

// Functions ( header name is application )
#include "copy.h"
#include "concatenation.h"
#include "comparison.h"
#include "searching.h"



#endif // MYSTRING_H_INCLUDED
