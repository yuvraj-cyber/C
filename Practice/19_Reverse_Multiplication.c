#include <stdio.h>

int main()
    {
        int a, i;
        printf("Enter a number: ");
        scanf("%d", &a);

        for (i = 10; i; i--){
                printf("%d * %d = %d\n", a, i, a*i);
            }
        return 0;
    }