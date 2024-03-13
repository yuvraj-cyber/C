#include <stdio.h>
float average(float x, float y, float z);

int main()
    {
        int a, b,c;

        printf("First Number: ");
        scanf("%d", &a);

        printf("Second Number: ");
        scanf("%d", &b);

        printf("Third Number: ");
        scanf("%d", &c);

        printf("Average = %.2f", average(a,b,c));
        

        return 0;
    }


float average(float x, float y, float z)
    {
        float avg;
        avg =  (x + y + z)/3;
        return avg;

    }