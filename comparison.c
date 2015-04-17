#include "comparison.h"

extern const int sizeInt;
extern const char endSymb;

int lmemcmp(const void *ptr1,
            const void *ptr2, size_t num)
{
    if(ptr1 == ptr2 || !num)
        return 0;

    // look like this pointers can be from start "unsigned char*"
    const char* ptrByte1 = (const char*)ptr1;
    const char* ptrByte2 = (const char*)ptr2;
    while(num--)
        if(*ptrByte1++ != *ptrByte2++)
            return(*((unsigned char*)(ptrByte1-1)) -
                   *((unsigned char*)(ptrByte2-1)));
    return 0;
}

int lstrcmp(const char *str1, const char *str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == endSymb)
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int lstrncmp(const char *str1, const char *str2, size_t num)
{
    while(*str1 == *str2 && num--)
    {
        if(*str1 == endSymb)
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}







