#include <stdio.h>


void table(int l, int m, int n)
    {
        int tb[3][10]; /* 2D array to store the multiplication tables */

        printf("Multiplication table of %d: \n", l);

        for(int j = 0; j<10; j++)
            {
                
                tb[0][j] = l*(j+1);
                printf("%d*%d = %d\n", l, (j+1), tb[0][j]);
            }

         printf("Multiplication table of %d: \n", m);

        for(int j = 0; j<10; j++)
            {
                
                tb[0][j] = m*(j+1);
                printf("%d*%d = %d\n", m, (j+1), tb[0][j]);
            }
        
         printf("Multiplication table of %d: \n", n);

        for(int j = 0; j<10; j++)
            {
                
                tb[0][j] = n*(j+1);
                printf("%d*%d = %d\n", n, (j+1), tb[0][j]);
            }



    }

int main()
    {
        table(2,3,4);



        return 0;
    }