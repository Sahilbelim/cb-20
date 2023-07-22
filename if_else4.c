#include<stdio.h>
void main()
{
    int number;
    printf("Enter number ");
    scanf("%d", &number);
    printf("Number is %d \n ", number);
    if(number>0)
    {
        printf("Number is positive ");
    }
    else if(number<0)
    {
        printf("number is nagitive ");
        number = number * (-1);
         printf("\n positive number is %d ", number);

    }
    else
    {
        printf("number is zero ");
    }

}