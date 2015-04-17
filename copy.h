#ifndef COPYFUNCTIONS_H_INCLUDED
#define COPYFUNCTIONS_H_INCLUDED

#include <stddef.h>

// Copying functions:

// Copy block of memory (by bytes), not safe for overlapping.
// Copies the values of num bytes from the location pointed by source
// directly to the memory block pointed by destination.
void* lbmemcpy(void *destination, const void *source, size_t num);

// Copy block of memory, not safe for overlapping.
// Copies the values of num bytes from the location pointed by source
// directly to the memory block pointed by destination.
void* lmemcpy(void *destination, const void *source, size_t num);

// Move block of memory, safe for overlapping.
// Copies the values of num bytes from the location pointed by source
// to the memory block pointed by destination. Copying takes place as
// if an intermediate buffer were used, allowing the destination and source to overlap.
void* lmemmove(void *destination, const void *source, size_t num);

// Copy string including end-string symbol.
// Copies the C string pointed by source into the array pointed by destination,
// including the terminating null character (and stopping at that point).
char* lstrcpy(char *destination, const char *source);

// Copies the first num characters of source to destination.
// If the end of the source C string (which is signaled by a null-character) is found
// before num characters have been copied, destination is padded with zeros
// until a total of num characters have been written to it.
char* lstrncpy(char *destination, const char *source, size_t num);



#endif // COPYFUNCTIONS_H_INCLUDED
