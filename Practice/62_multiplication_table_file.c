#include <stdio.h>

int main()
    {
        FILE *table;
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        table = fopen("table.txt", "w");
        fprintf(table, "Table of %d:\n", num);
        for(int i=0; i<10; i++)
            {
                fprintf(table, "%d * %d = %d\n", num, i+1, num*(i+1));
            }

        fclose(table);


        return 0;
    }