#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char player, char bot)
    {
        if(player == bot)
            {
                return 0;
            }
        
        else if(player == 'r' && bot == 's')
            {
                return 1;
            }
        
        else if(player == 'r' && bot == 'p')
            {
                return -1;
            }
        
        else if(player == 's' && bot == 'r')
            {
                return -1;
            }

        else if(player == 's' && bot == 'p')
            {
                return 1;
            }

        else if(player == 'p' && bot == 'r')
            {
                return 1;
            }

        else if(player == 'p' && bot == 's')
            {
                return -1;
            }
    }


int main()
    {

        char player, bot;
        int score = 1;

        srand(time(0));
        int num = rand()%3 +1; // generates a random number between 1 and  3 for the computer to play.

        if(num == 1)
            {
                bot = 's';
            }

        else if(num == 2)
            {
                bot = 'r';
            }

        else
            {
                bot = 'p';
            }

        printf("Enter \'r\' for Rock, \'p\' for Paper, \'s\' for Scissor: \n");
        scanf("%c", &player);

        int result = game(player, bot);
        

        if (result == 0)
            {
                printf("Draw!\n");                
            }

        else if(result == 1)
            {
                printf("Player wins!\n");
            }

        else if(result == -1)
            {
                printf("Player loses!\n");
            }

       



        printf("Player chose : %c while Bot chose : %c", player, bot);
        return 0;
    }