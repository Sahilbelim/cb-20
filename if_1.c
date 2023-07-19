#include<stdio.h>
void main()
{
    int number1, number2;

    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 ");
    scanf("%d", &number2);

    printf("Value of number 1 is %d \nValue of number 2 is %d", number1, number2);

    if(number1<number2)
    {
        printf("\nnumber 2 is greter ....");
    }
    if(number2<number1)
    {
        printf("\n number 1 is greter ....");
    }
    printf("\ngood byee.....");
}