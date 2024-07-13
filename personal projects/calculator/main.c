#include <stdio.h>
#include <stdlib.h>

int main()
{
    //to get input from user
    float val1,val2;
    char op;
    printf("enter the first number :");
    scanf("%f",&val1);
    printf("enter the operator :");
    scanf(" %c",&op);
    printf("enter the second number :");
    scanf("%f",&val2);
    
    //switch statements to perform desired operations
    switch(op){
        case '+':
            printf("%f",val1+val2);
            break;
        case '-':
            printf("%f",val1-val2);
            break;
        case '*':
            printf("%f",val1*val2);
            break;
        case '/':
            if(val2 == 0){
                printf("error! cannot divide by zero\n");
            }
            else{
            printf("%f",val1/val2);
            }
            break;
        default:
            printf("invalid operator");
            break;
    }
    return 0;
}
