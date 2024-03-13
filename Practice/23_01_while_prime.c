#include <stdio.h>

int main()
    {
        int n, i = 2;
        printf("Enter a number: ");
        scanf("%d", &n);
    // --> prime number if  divisible by 1 and itself only i.e n %% i == 0
        while(i < n )
            {
                i++;
                if (n%i == 0)
                    {
                        printf("%d is not a prime number.", n);
                    }
                else
                    {
                        printf("%d is  a prime number.", n);
                    }
        return 0;
            }






        return 0;
    }