#include <stdio.h>

int main()
{
    int a, b; // Declaring that [a,b] are integers
    printf("First Number: "); //This will just print
    scanf("%d",  &a); 
    /*
    Here, [scanf()] prompts an input from the user and 
    [%d] states the data type is an integer and [&] is used to get the address of a
    */

    printf("Second Number: ");
    scanf("%d", &b);

    printf("Sum = %d", a+b);

    return 0;
    //Here [return 0] indicates that the program was a success 
}