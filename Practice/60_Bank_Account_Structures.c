#include <stdio.h>
#include <string.h>

struct acc
    {
        char name[50];
        int account;
        char branch[50];
        int pin;
        float amount;
    };

int main()
    {
        struct acc a1, a2, a3;

        printf("Enter the details of customer a1:\n"); 
        printf( "Name: ");
        fgets(a1.name, sizeof(a1.name), stdin);

        printf("Account Number: ");
        scanf("%d", &a1.account);

        getchar();

        printf("Branch: ");
        fgets(a1.branch, sizeof(a1.branch), stdin);

        printf("Pin: ");
        scanf("%d", &a1.pin);

        getchar();

        printf("Total Amount: ");
        scanf("%.2f", &a1.amount);

        getchar();


        printf("Enter the details of customer a2:\n"); 
        printf( "Name: ");
        fgets(a2.name, sizeof(a2.name), stdin);

        printf("Account Number: ");
        scanf("%d", &a2.account);

        getchar();

        printf("Branch: ");
        fgets(a2.branch, sizeof(a2.branch), stdin);


        printf("Pin: ");
        scanf("%d", &a2.pin);

        getchar();
        
        printf("Total Amount: ");
        scanf("%.2f", &a2.amount);

        getchar();


        printf("Enter the details of customer a3:\n"); 
        printf( "Name: ");
        fgets(a3.name, sizeof(a3.name), stdin);

        printf("Account Number: ");
        scanf("%d", &a3.account);

        getchar();

        printf("Branch: ");
        fgets(a3.branch, sizeof(a3.branch), stdin);


        printf("Pin: ");
        scanf("%d", &a3.pin);

        getchar();
        
        printf("Total Amount: ");
        scanf("%.2f", &a3.amount);




        printf("Details of costumer 1: \n");
        printf( "Name: %s", a1.name);
        printf("\n Account number: %d", a1.account) ;
        printf(" Branch: %s", a1.branch);
        printf("\n Pin: %d\n", a1.pin);
        printf("Amount: %.2f\n", a1.amount);


        printf("Details of costumer 2 \n");
        printf( "Name: %s", a2.name);
        printf("\n Account number: %d", a2.account) ;
        printf(" Branch: %s", a2.branch);
        printf("\n Pin: %d\n", a2.pin);
        printf("Amount: %.2f\n\n", a2.amount);


        printf("Details of costumer a3: \n");
        printf( "Name: %s", a3.name);
        printf("\n Account number: %d", a3.account) ;
        printf(" Branch: %s", a3.branch);
        printf("\n Pin: %d\n", a3.pin);
        printf("Amount: %.2f\n\n", a3.amount);
        return 0;
    }