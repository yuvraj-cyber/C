#include <stdio.h>

int main()
    {
        int n,i, sum = 0;
        printf("Value of n: ");
        scanf("%d", &n);

        for (i = 0; i <=n; i++)
            {
                sum  = sum + i;
            }
        printf("Sum: %d", sum);
        return 0;
    }