#include <stdio.h>

int main()
    {
        int n,i=0, sum = 0;
        printf("Value of n = ");
        scanf("%d", &n);

        while (i <= n)
            {   
                sum = sum + i;
                i++;
                /*
                Here, the initial sum and i are 0,
                so when we add them together in the first loop iteration,
                they become 1+0 = 1. Then on each subsequent iteration,
                we add the current value of i to the running total:
                2+(1+0)=3, then 3+(1+1)=5, etc.
                */
            }
        printf("Sum = %d", sum);


        return 0;
    }