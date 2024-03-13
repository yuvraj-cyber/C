#include <stdio.h>

void call_by_value(int a, int b);
void call_by_reference(int *a, int *b);

int main()
    {
        int x, y;

        printf("Enter the value of x: ");
        scanf("%d", &x);

        printf("Enter the value of y: ");
        scanf("%d", &y);

        printf("\ncall_by_value\n");
        call_by_value(x,y);

        printf("Swaping x and y :\n    x = %d\n    y = %d\n\n", x, y);

        //"Note that the values can not be swaped because the the function is called by values and  it does not affect the original variables.

        printf("Call_by_reference\n");

        call_by_reference(&x,&y);

        printf("Swaping x and y :\n    x = %d\n    y = %d", x, y);

        return 0;

    }


void call_by_value(int a, int b)
    {
        int temp;

        temp = a;
        a = b;
        b = temp;
    }

void call_by_reference(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b =  temp;
    }