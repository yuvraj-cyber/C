#include <stdio.h>

int main()
    {
        int i,n;
        printf("Enter no. of natural number you want to calculate: ");
        scanf("%d", &n);

        for (i = n ; i; i--){
        printf("%d\n",i);
        }

        return 0;
    }