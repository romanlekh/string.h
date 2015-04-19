#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "myString.h"

int main()
{
    char str[] = "almost every programmer should know memset!";
    memset (str,7,6);
    puts (str);
    return 0;



}
