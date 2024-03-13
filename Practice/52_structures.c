#include <stdio.h>
#include <string.h>

struct employee
    {
        int ID;
        char name[20];
        float salary;
    };


int main()
    {
        struct employee emp[3];
        
        for(int i =0; i<3; i++)
        {
        printf("\nEnter the details of emp%d: \n", i+1);

        printf("Employee ID : ");
        scanf("%d", &emp[i].ID);

        printf("Employee Name : ");
        getchar(); // to clear the buffer before taking input
        fgets(emp[i].name, sizeof(emp[i].name), stdin); 

        printf("Employee Salary: ");
        scanf("%f", &emp[i].salary);
        }


        return 0;
    }