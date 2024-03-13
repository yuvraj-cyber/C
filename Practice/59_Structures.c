#include <stdio.h>

typedef struct complex
    {
        int real;
        int img;
    }comp;

void result(comp c)
    {
        printf("Complex number is %d + %di\n", c.real, c.img);
    }

int main()
    {
        comp cn[5];

        for(int i = 0; i<5; i++)
            {
                printf("\nEnter real part of number%d: ", i+1);
                scanf("%d", &cn[i].real);

                printf("Enter complex part of number%d: ", i+1);
                scanf("%d", &cn[i].img);
            }

        for(int i = 0; i<5; i++)
            {
                result(cn[i]);
            }





        return 0;
    }