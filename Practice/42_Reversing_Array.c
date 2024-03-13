#include <stdio.h>

void reverse(int *arr, int n)  //This defines a function "reverse" which takes two parameters : a pointer to an integer array 'arr' and an integer 'n'
    {
        printf("Original Array: ");
        for(int i=0; i<n; i++)
            {
                printf("%d ", arr[i]); // Prints each element of the array 'arr' one by one
            }
        for(int i = 0; i<(n/2); i++)
            {
                int temp = arr[i]; // Stores the value of current element 'arr[i]' in a temporary variable.
                arr[i] = arr[n-1-i]; //assigning the value of corresponding element from the end to the current element.
                arr[n-1-i] = temp; //assigning thee value stored in temporary variable to the corresponding element.
                
            }
        printf("\nReversed Array: ");
        for(int i=0; i<n; i++)
            {
                printf("%d ", arr[i]);
            }



    }


int main()
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        reverse(arr, 10);
        return 0;
    }