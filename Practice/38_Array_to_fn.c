#include <stdio.h>

void printArray(int *ptr, int n)
    {
        for(int i=0; i<n; i++)
            {
                printf("Value of Element %d is %d \n", i+1, *(ptr +i));
            }
        
        ptr[0] = 0;//This will change the value in main function.

    }

int main()
    {
    int arr[] = {1,2,3,4};
    printArray(&arr,4);
    printf("%d", arr[0]);
    return 0;
    } 