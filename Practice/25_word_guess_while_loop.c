#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
    {
        int num, level,l,guess,nguess=1;

        printf("Choose a level from 1 to 10: ");
        scanf("%d",&level);

        l = level*10;

        srand(time(0));
        num = rand()% l + 1;

        printf("Random number between 1 and %d is: %d\n",l,num);

        

         
        while(guess != num)
            {
                printf("Guess number between 1 and %d : ",l);
                scanf("%d",&guess);

                if(guess>num)
                    {
                        printf("Enter a lower number!\n");
                    }
                
                else if(guess<num)
                    {
                        printf("Enter a higher number!\n");
                    }
                else 
                    {
                        printf("Great! %d is indeed the number.\n", num);

                        printf("Your score is %d.\n", nguess);
                    }
                nguess++;

            }



        return 0;
    }