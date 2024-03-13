#include <stdio.h>

void name(int n, int m)
    {
       

        int marks[n][m];

        for(int i=0; i<n; i++)
            {
                for(int j = 0; j<m; j++)
                {
                    printf("Marks of student %d in Subject %d : ", i+1, j+1);
                    scanf("%d", &marks[i][j]);
                }
            }

        printf("\n Marks Collected\n");
        for(int i=0; i<n; i++)
            {
                printf("Student %d : ", i+1);
                for(int j=0; j<m; j++)
                    {
                        printf("%d ", marks[i][j]);
                    }
                printf("\n");
            }


    }

int main()
    {
        int x,y;
        printf("Number of students: ");
        scanf("%d", &x);
        printf("Number of Subjects: ");
        scanf("%d", &y);
        name(x,y);
        



        return 0;
    }