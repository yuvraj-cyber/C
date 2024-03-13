#include <stdio.h>

void pattern(int n);
int main()
    {
        int n;
        printf("Enter the number of line you want to print: ");
        scanf("%d", &n);

        pattern(n);

        return 0;
    }

void pattern(int n)
    {
        if (n == 1)
            {
                printf("#\n");
                return;
            }
        pattern(n-1);
        for (int i =0; i<(n); i++)
            {
                printf("#");
            }
            printf("\n");
        
    }