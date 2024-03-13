#include <stdio.h>

int main()
    {
        int n,i=1,p=1;
        printf("Enter a number: ");
        scanf("%d", &n);

        do
        {
            p = p*i;
            i++;
        }
        while(i <= n);
        printf("%d", p);

        return 0;
    }