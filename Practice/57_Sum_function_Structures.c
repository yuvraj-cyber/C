#include <stdio.h>

struct vector
    {
        int x;
        int y;
    };

struct vector sum(struct vector v1, struct vector v2)
    {
        struct vector result;

        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;

        return result;
        
    }

int main()
    {
        struct vector v1,v2, add;

        v1.x = 3;
        v1.y = 7;

        v2.x = 4;
        v2.y = 6;

        printf("Vector are: \n   V1 V2\nx: %d  %d \ny: %d  %d \n\n", v1.x, v2.x, v1.y, v2.y);

        add =  sum(v1,v2);

        printf("Sum Vector is : \n x: %d\n y: %d", add.x, add.y);

        return 0;
    }