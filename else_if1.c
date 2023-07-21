#include<stdio.h>
void main()
{
    int number1, number2;

    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 ");
    scanf("%d", &number2);

    printf("Number 1 is %d and number 2 is %d  \n", number1, number2);

    if(number1<number2)
    {
        printf("number 1 is small \n");

    }
    else if(number2<number1)
    {
        printf("number 2 is small \n");
    }
    else
    {
        printf("both are same \n");
    }
    printf("Good byee ..........");

    
}