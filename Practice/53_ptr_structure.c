#include <stdio.h>
#include <string.h>

struct employee
    {
        int ID;
        char name;
        float salary;
    };

int main()
    {
        struct employee e1;   // Declare an employee structure object called 'e1'
        struct employee *ptr;  // Declare a pointer to the employee structure type, pointing at 'e1'.

        ptr = &e1;
        /*
        (*ptr).ID = 876434564; // Accessing and modifying the member "ID" of 'e1' using the pointer '
        */
        *(ptr)->ID = 876434564; // Same as above line but written in another way (recommended)
        printf("%d", e1.ID);



        return 0;
    }