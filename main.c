#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "myString.h"

int main()
{
    char str1[] = "Sample string";
    char str2[40];
    tolstr(str1);
    tolstr(str2);

    lstrcpy(str2,str1);

    lprint(str1);
    printf("\n");
    lprint(str2);
    return 0;
}
