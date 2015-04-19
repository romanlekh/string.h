#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

// Helpful functions

// Print CL-string, return the total number of characters.
int lprint(char *data);

// Returns the length of the string str.
size_t lstrlen(const char *str);

// Convert C-string to l-string. Change last '\0' symbol to endSymbol.
char* tolstr(char *cstr);

// Convert l-string to C-string.
char* tocstr(char *lstr);

// Fill block of memory.
// Sets the first num bytes of the block of memory pointed by ptr to the
// specified value (interpreted as an unsigned char).
void* lmemset(void *ptr, int value, size_t num);

#endif // TOOLS_H_INCLUDED
