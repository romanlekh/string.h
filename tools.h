#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

// Helpful functions

// Print CL-string, return the total number of characters
int lprint(char *data);

// Returns the length of the string str.
size_t lstrlen(const char *str);

// Change last '\0' symbol to endSymbol
void tolstr(char *str);

#endif // TOOLS_H_INCLUDED
