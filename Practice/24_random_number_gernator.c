#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
    {
        int num;
        srand(time(0));
        num = rand()% 10 + 1;
        printf("Random number between 1 and 10 is: %d\n",num);



        return 0;
    }