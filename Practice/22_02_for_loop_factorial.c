#include <stdio.h>

int main()
    {
        int n, i, p =1;
        printf("Enter a number: ");
        scanf("%d", &n);

        // 1*2*3*4*5*6*7*8*9

        for(i=1; i <= n; i++)
            {
            p = p*i;
            }
        printf("%d", p);
        return 0;
    }