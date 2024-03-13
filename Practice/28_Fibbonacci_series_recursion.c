#include <stdio.h>

int fibonacci(int n);

int main()
    {
        int n;
        printf("n = ");
        scanf("%d",&n);

        printf("'nth' element is %d", fibonacci(n));
    


        return 0;
    }


int fibonacci(int n)
    {   
        if (n == 1 || n == 2)
        {
            return 1;
        }

        else if (n == 0)
        {
            return 0;
        }

        else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }