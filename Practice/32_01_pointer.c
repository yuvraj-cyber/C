#include <stdio.h>

int main ()
    {
        int a, b;

        printf("a = ");
        scanf("%d", &a);

        printf("b = ");
        scanf("%d", &b);

        printf("Address of a is %u\n", &a);
        printf("Address of b is %u\n", &b);

        int *x, *y;
        x = &a;
        y = &b;
        

        printf("Value of a is %d\n", *x);
        printf("Value of b is %d\n", *y);



        return 0;
    }