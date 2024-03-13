#include <stdio.h>
#include <string.h>

typedef struct employee
    {
        int ID;
        char name[50];
        float salary;
    }employee;

void details(employee emp[], int size)
    {
        printf("\nDetails of Employees: \n");
        for(int i = 0; i < size; i++)
        {
            printf("\n************************************************************\n");
            printf("Employee %d:\n", i + 1);
            printf("ID: %d\n", emp[i].ID);
            printf("Name: %s", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
        }

    }

int main() {
    employee emp[3];

    for(int i = 0; i < 3; i++) {
        printf("\nEnter the details of emp%d: \n", i + 1);

        printf("Employee ID : ");
        scanf("%d", &emp[i].ID);

        getchar(); // Clear the newline character from the input buffer
        printf("Employee Name : ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("Employee Salary: ");
        scanf("%f", &emp[i].salary);

    }
        details(emp, 3);




        return 0;
    }