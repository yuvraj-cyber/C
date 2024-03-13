#include <stdio.h>

int main()
    {
        int n,i=0,p,sum = 0;
        printf("Enter a number: ");
        scanf("%d", &n);

        while(i<=10)
            {
                p = n*i;
                i++;
                sum += p;
            }


        printf("%d", sum);

        return 0;
    }