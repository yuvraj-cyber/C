#include <stdio.h>
#include <string.h>


int main()
    {

        char name[10];
        printf("Enter your name: ");
        scanf("%s", name);
        printf("%s\n", name);

        fflush(stdin);  // clear input buffer to prevent overflow if user enters more than 9 characters

        char full_name[25];
        printf("\nEnter your full name: ");
        gets(full_name);
        printf("%s", full_name);




        return 0;
    }