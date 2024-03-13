#include <stdio.h>
#include <string.h>

int main()
    {
        char str1[] = "Hello";
        char *str2 = "World";
        int value = strcmp(str1,str2);
        printf("Value is \"%d\"", value);



        return 0;
    }