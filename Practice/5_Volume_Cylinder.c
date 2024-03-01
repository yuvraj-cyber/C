#include <stdio.h>

int main()
{
    float r,h;
    float pi = 3.14;
    printf("Radius of the cylinder: ");
    scanf("%f", &r);

    printf("Height of the cylinder: ");
    scanf("%f", &h);

    printf("Volume of the Cylinder is %f", pi*r*r*h);


    return 0;
}