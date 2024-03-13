#include <stdio.h>

int main()
    {
        int a[] = {32, 56, 56, 9, 2.5};
        printf("a[0] = %d \n", a[0]);
        printf("a[1] = %d \n", a[1]);
        printf("a[2] = %d \n", a[2]);
        printf("a[3] = %d \n", a[3]);

        printf("a[4] = %d \n", a[4]);
        /* This wil only give "2" instead of "2.50000"
           because we are storing int in array which only
           stores same type of data.*/




        return 0;
    }