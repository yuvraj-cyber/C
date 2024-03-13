#include <stdio.h>

int main()
    {
        int num[] = {-1,2,3,-4,-5,6,7,8,-9,10};

        int i, j = 0;

        for(i = 0; i<10; i++)
            {
                if(num[i] > 0)
                    {
                        j++;
                    }

            }

        printf("%d", j);


        return 0;
    }