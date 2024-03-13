#include <stdio.h>

int main()
    {
        int n,i,sum=0;
        printf("Value of n: ");
        scanf("%d", &n);

        do 
            {
                sum += i;
                i++;
            }
        while(i <=n);

        printf("Sum = %d", sum);


        return 0;
    }