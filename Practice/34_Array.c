#include <stdio.h>

int main()
    {
        int marks[3];
        printf("Maths Marks: ");
        scanf("%d", &marks[0]);
        printf("Physics Marks: ");
        scanf("%d", &marks[1]);
        printf("Chemistry Marks: ");
        scanf("%d", &marks[2]);

        printf("Your marks in Maths, Physics and Chemistry are : %d %d %d", marks[0], marks[1], marks[2]);


        return 0;
    }