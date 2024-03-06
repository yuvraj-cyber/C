#include <stdio.h>

int main()
    {
        int i = 1,n;
        printf("Enter no. of natural numbers  you want to print: ");
        scanf("%d", &n);

        do {
            printf("%d\n", i);
            i++;
        }
        while (i<=n);

        return 0;


    }