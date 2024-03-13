#include <stdio.h>

int main()
    {
        char name[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // '\0' represents the null terminator
        
        //Alternate method to define the same character array using a string literal:
        /*
        char name[] = "Hello"; 
        */ 

        printf("%s", name); //Prints the string stored in the 'name' array using '%s' format specifier.

        return 0;
    }