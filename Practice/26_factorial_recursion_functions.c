#include <stdio.h>

int factorial();
//Function prototype for factorial

int main()
    {
        int n;

        printf("Value of n: ");
        scanf("%d", &n);

        printf("Factorial of %d is %d", n, factorial(n));

        return 0;
    }

int factorial(int n)
//Recursive function to calculate factorial
    {
        

        if (n == 0 || n == 1)
        //IF n  is zero or one, the factorial is 1
            {
                return 1;
            }
        
        else
            {
                return n*factorial(n-1);
            }
    }
