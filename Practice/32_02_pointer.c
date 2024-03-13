#include <stdio.h>
void fun(int x);
int main ()
    {
        int i;
        int *j;
        j = &i;  //j is a pointer to an integer, pointing at the variable i

        printf("i = ");
        scanf("%d", &i);

        printf("Address of i is %u\n", j);

        fun(j);   //calling function fun with argument value of i through the pointer j
        printf("Address of i after calling the function is %u", &j);

        return 0;
    }

void fun(int x)
    {
        
    }