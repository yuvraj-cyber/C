#include <stdio.h>

int main()
    {
        int marks[3];
        int *ptr;
        ptr = &marks[0];

        for (int i=0; i<3; i++)
            {
                printf("Subject %d Marks: ", i+1);
                scanf("%d", ptr);
                ptr++;
            }


        for (int i=0; i<3; i++)
                {
                    printf("Marks of Subject %d are: %d\n", i+1, marks[i]);
                }





        return 0;
    }