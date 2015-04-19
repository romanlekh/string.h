#ifndef SEARCHING_H_INCLUDED
#define SEARCHING_H_INCLUDED

#include <stddef.h>

// Searching

// Locate character in block of memory
// Searches within the first num bytes of the block of memory
// pointed by ptr for the first occurrence of value
// and returns a pointer to it.
const void* lcmemchr(const void *ptr,
                    int value, size_t num);
void* lmemchr(void *ptr, int value, size_t num);

// Locate first occurrence of character in string
// Returns a pointer to the first occurrence of character in the C string str.
const char* lcstrchr(const char *str, int character);

// Get span until character in string
size_t lstrcspn(const char *str1, const char *str2);

// Locate characters in string
char* lstrpbrk(const char *str1, const char *str2);

// Locate last occurrence of character in string
char* lstrrchr(const char *str, int character);

// Get span of character set in string.
// Returns the length of the initial portion
// of str1 which consists only of characters that are part of str2.
size_t lstrspn(const char *str1, const char *str2);

// Locate substring.
// Returns a pointer to the first occurrence of str2 in str1,
// or a null pointer if str2 is not part of str1.
char* lstrstr(const char *str1, const char *str2);

// Split string into tokens.
// A sequence of calls to this function split str into tokens,
// which are sequences of contiguous characters separated by any
// of the characters that are part of delimiters.
char* lstrtok(char *str, const char *delim);


#endif // SEARCHING_H_INCLUDED
