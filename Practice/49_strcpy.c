#include <stdio.h>
#include <string.h>

int main()
    {
        char *str1 = "String 1";
        char str2[20];

        strcpy(str2, str1);
        printf("Str2 is %s", str2);


        return 0;
    }