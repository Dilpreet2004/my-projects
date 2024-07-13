#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1 for player wins,-1 for computer wins and 0 for tie

char bot,player;

//to check for winner
int checkForWinner(char bot,char player)
{
    if(bot == player)
        return 0;

    if(bot == 'r' && player == 'p')
        return 1;
    else if(bot == 'p' && player == 'r')
        return -1;

    if(bot == 's' && player == 'r')
        return 1;
    else if(bot == 'r' && player == 's')
        return -1;

    if(bot == 'p'&& player == 's')
        return 1;
    else if(bot == 's' && player == 'p')
        return -1;
}

int main()
{
    //main input screen
    int result;
    do{
    printf("Enter r for ROCK, p for PAPER and s for SCISSOR\n");
    printf("Player : ");
    scanf(" %c",&player);

    //to generate computer choice
    srand(time(0));
    int random = rand()%100;

    if(random < 33)
        bot = 'r';
    else if(random > 33 && random < 66)
        bot = 'p';
    else if(random > 66)
        bot = 's';

    //to display winner of game
    result = checkForWinner(player,bot);
    if(result == 1){
        printf("Game Draw!\n");
    }
    else if(result == -1){
        printf("Wow! You have won the game!\n");
    }
    else{
        printf("Game Draw!\n");
    }

    printf("You choose : %c and Computer choose : %c\n",player, bot);
    printf("\n\n");
    }while(result == 0);
    return 0;
}
