#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int low = 0;
    int high = 0;
    printf("before starting the game, please enter the lower and upper limit within which i have to choose number\n");
    printf("lower limit: ");
    scanf("%d",&low);
    printf("upper limit: ");
    scanf("%d",&high);
    int range = high - low +1;
    srand(time(0));
    int random_number = low + rand()%range;
    int max_guess = 5;
    int guess = 0;
    system("clear");
    printf("this is a number guessing game\n");
    printf("I have chosen number between %d - %d and you have to guess it\n",low,high);
    for(int i = max_guess;i > 0;i--){
        printf("you have %d tr%s left\n",i,i == 1?"y":"ies");
        printf("enter your guess: ");
        scanf("%d",&guess);
        if(guess == random_number)
        {
            printf("\ncongrats! you have guessed it right\n");
            return 0;
        }
        else if(guess > high || guess <= low)
        {
            printf("\nInvalid number! i have chosen number between %d - %d\n",low,high);
        }
        else if(guess > random_number){
            printf("\nYour guess is wrong. My number is lesser than yours\n");
        }
        else if(guess < random_number){
            printf("\nYour guess is wrong. My number is greater than yours\n");
        }
    }
    printf("\nyou are out of moves\n");
    printf("correct number is %d\n",random_number);
    return 0;
}
