#include <stdio.h>
#include <string.h>



int main()
    {
        char str[] = "Hello World";
        char *ptr = str;
        int length = strlen(str);

        printf("Length of the string is %d ", length);


        return 0;
    }