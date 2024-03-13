#include <stdio.h>

int main()
    {
        int n, i = 1, p =1;
        printf("Enter a number: ");
        scanf("%d", &n);

        // 1*2*3*4*5*6*7*8*9

        while(i <=n)
            {
                p = p*i;
                i++;
            }
        printf("%d", p);
    }