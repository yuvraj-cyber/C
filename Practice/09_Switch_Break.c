#include <stdio.h>

int main()
{
    int a;
    printf("Enter your rating from 1 to 5: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("Your rating is 1\n");
            break;

        case 2:
            printf("Your rating is 2\n");
            break;

        case 3:
            printf("Your rating is 3\n");
            break;

        case 4:
            printf("Your rating is 4\n");
            break;

        case 5:
            printf("Your rating is 5\n");
            break;

        default:
            printf("Invalid rating!\n");
            break;

    return 0;
    }
}
