#include <stdio.h>

int main()
{
    float C, F;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);

    printf("Converting Celsius to Fahrenheit %f", C*(9.0/5.0)+32);

    return 0;

}