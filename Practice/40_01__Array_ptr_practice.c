#include <stdio.h>


int main()
    {
        int arr[10] = {12, 13, 14, 15, 16 ,17, 18, 22, 23, 24};
        int *ptr;
        ptr = &arr[0];

        printf("Value of 1st Element is %d.\n", *ptr);

        printf("Address of 1st Element is %u\n", ptr);

        printf("Value of 3rd Element is %d\n", arr[2]);

        printf("Value at (ptr + 2) is %d.\n ", *(ptr+2));

        if(arr[2] == *(ptr+2))
            {
                printf("*(ptr+2) points to 3rd element");
            }
        else
            {
                printf("*(ptr+2) does not point to 3rd element");
            }

        return 0;
    }