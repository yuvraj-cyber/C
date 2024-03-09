#include <stdio.h>

int main()
    {
        int a, i;
        printf("Enter a number: ");
        scanf("%d", &a);

        while (i<=10)
            {
                printf("%d * %d = %d\n", a, i, a*i);
                i++;
                continue;
                return 0;
            }
    }