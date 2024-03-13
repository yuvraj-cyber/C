#include <stdio.h>

int main()
    {
        int marks[5];

        for (int i=0; i<5; i++)
            {
                printf("Subject %d Marks: ", i+1);
                scanf("%d", &marks[i]);
            }

        for (int i=0; i<5; i++)
                {
                    printf("Marks of Subject %d are: %d\n", i+1, marks[i]);
                }



        return 0;
    }