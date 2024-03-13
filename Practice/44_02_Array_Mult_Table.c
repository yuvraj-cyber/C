#include <stdio.h>

void table(int *num, int n)
    {
        for(int i =0; i<n; i++) //Starting a loop that iterates over the elements of 'num' array
        {
            printf("Multiplication Table of %d \n", num[i]);
       
            for(int j =0; j<10; j++) // Starts a nested loop that iterates over the numbers 1 to 10
                {
                    int result = num[i]*(j+1); //  Multiplies the element at index 'i' by the number in the inner loop and stores it in result.
                    printf("%d * %d = %d\n", num[i], j+1, result); // prints the table
                }
            
            printf("\n*******************************************************\n\n");
        }
    }




int main()
    {
        int n; // Declaring variable to store the number of digits
        printf("Enter the Number of digits you want to find the Multiplication table: ");
        scanf("%d", &n); //gets input from user and stores it in the variable 'n'

        int num[n]; //Declaring an array to store integers

        for(int i = 0; i<n; i++) //loop to prompt the user to give the numbers whose the table is to be calculated
            {
                printf("Enter the Number: ");
                scanf("%d", &num[i]);
            }

        table(num,n);// Calling the function by passing the array 'num' and the number of digits 'n' as an argument.


        return 0;
    }