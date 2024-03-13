#include <stdio.h>

int main()
    {
        int a1, a2, a3;
        FILE *ptr;
        ptr = fopen("61_int.txt", "r");
        fscanf(ptr, "%d %d %d", &a1, &a2, &a3);

        printf("The integers of the file \"61_int.txt\" are: %d %d %d", a1, a2, a3);



        return 0;
    }