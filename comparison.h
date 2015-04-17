#ifndef COMPARISON_H_INCLUDED
#define COMPARISON_H_INCLUDED

#include <stddef.h>

// Comparison

// Compare two blocks of memory
// Compares the first num bytes of the block of memory pointed
// by ptr1 to the first num bytes pointed by ptr2, returning zero
// if they all match or a value different from zero representing
// which is greater if they do not.
int lmemcmp(const void *ptr1, const void *ptr2, size_t num);

// Compares the l-string str1 to the C-string str2
// This function starts comparing the first character of each string.
// If they are equal to each other, it continues with the following pairs
// until the characters differ or until a terminating null-character is reached.
int lstrcmp(const char *str1, const char *str2);

// Compare characters of two strings.
// Compares up to num characters of the l-string str1 to those of the l-string str2.
int lstrncmp(const char *str1, const char *str2, size_t num);


#endif // COMPARISON_H_INCLUDED
