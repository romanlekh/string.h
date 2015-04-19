#include "comparison.h"

extern const int sizeInt;
extern const char endSymb;

int lmemcmp(const void *ptr1,
            const void *ptr2, size_t num)
{
    if(ptr1 == ptr2 || !num)
        return 0;

    unsigned char* ptrByte1 = (unsigned char*)ptr1;
    unsigned char* ptrByte2 = (unsigned char*)ptr2;
    while(num--)
        if(*ptrByte1++ != *ptrByte2++)
            return(*((unsigned char*)(ptrByte1-1)) -
                   *((unsigned char*)(ptrByte2-1)));
    return 0;
}

int lstrcmp(const char *str1, const char *str2)
{
    if( str1 == str2 || *str2 == endSymb )
        return 0;

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
    //if( str1 == str2 || *str2 == endSymb || num == 0)
      //  return 0;

    while(*str1 == *str2 && num--)
    {
        if(*str1 == endSymb || num == 0)
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}







