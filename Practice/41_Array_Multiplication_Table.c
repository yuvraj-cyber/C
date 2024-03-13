#include <stdio.h>

int table(int n)

    {
        int pdt[10]; //Declaring an array "pdt" with range 10.
        

        for(int i=0; i<=10; i++) //Value of "i" iterates from 0 to 10.
            {
                int p;
                pdt[i]= n*i; //Calculates product ant stores it in "pdt" array.

                printf("%d*%d = %d\n", n, i, pdt[i]);
                
            }
    }

int main()
    {
        int x;
        printf("Number: ");
        scanf("%d", &x);
        table(x); // Calls the function  "table" and passes the value of "x".


        return 0;
    }