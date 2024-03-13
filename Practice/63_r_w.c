#include <stdio.h>

int main()
    {
        FILE *emp;

        char name1[50];
        char name2[50];

        int salary1, salary2;

        printf("Name1: ");
        scanf("%s", name1);

        getchar();

        printf("Salary1: ");
        scanf("%d", &salary1);

        getchar();

        printf("Name2: ");
        scanf("%s", name2);

        getchar();

        printf("Salary2: ");
        scanf("%d", &salary2);

        getchar();

        emp = fopen("emp.txt", "w");

        fprintf(emp, "%s: %d\n", name1, salary1);
        fprintf(emp, "%s: %d\n", name2, salary2);

        fclose(emp);
        
        return 0;
    }