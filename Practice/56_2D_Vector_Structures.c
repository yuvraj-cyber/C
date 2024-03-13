#include <stdio.h>

struct vector
    {
        int x;
        int y;
    };

int main()
    {   
        struct vector v1,v2,v3;
        v1.x = 2;
        v1.y = 8;

        v2.x = 3;
        v2.y = 7;

        v3.x = 4;
        v3.y = 6;

        printf("Vector are: \n   V1 V2 V3\nx: %d  %d  %d\ny: %d  %d  %d\n", v1.x, v2.x, v3.x, v1.y, v2.y, v3.y);



        return 0;
    }