#include <stdio.h>

int main()
    {
        // 65 - 90 --> A-Z i.e Uppercase ASCII Values
        // 97 -122--> a-z i.e Lowercase ASCII values

        char ch;
        printf("Enter a lettter: ");
        scanf("%c", &ch);

        if(ch <= 90 && ch >= 65)
            printf("%c is an Uppercase.", ch);
        
        else if(ch <= 122 && ch >= 97)
            {
                printf("%c is a lower case.", ch);
            }

        else 
            {
                printf("%c is neither upper nor lower case", ch);
            }

        return 0;
    }