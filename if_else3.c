#include<stdio.h>
void main()
{
    int number;

    printf("Enter number ");
    scanf("%d", &number);
    printf("Number is %d \n", number);

    if(number%2==1)
    {
        printf("number is odd \n");
    }
    else
    {
        printf("number is even \n");
    }
    printf("Good byee  ");
}