#include <stdio.h>
#include <stdlib.h>


int main()
    {
        float *ptr;
        ptr = (float *)malloc(5 * sizeof(float)); // Allocating memory for 5 float values

        if(ptr == NULL)
            {
                printf("Memory allocation failed.\n");
                return 1;
            }

        for (int i =0; i<5; i++)
            {
                printf("Enter a number: ");
                scanf("%f", &ptr[i]); // Reading the numbers and storing them in the allocated memory
            }
        
        for(int i = 0; i<5; i++)
            {
                printf("Number%d: %f\n", i+1, ptr[i]); // Printing all the numbers entered by user 
            }
        
        free(ptr); // Freeing up the allocated memory 

        return 0;
    }