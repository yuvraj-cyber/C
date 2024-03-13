#include <stdio.h>



int main()
    {
        char string1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
        char *ptr = string1;

        while(*ptr != '\0')  // While
            {
                printf("%c", *ptr);
                ptr++;
            }


        return 0;
    }