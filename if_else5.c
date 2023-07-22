#include<stdio.h>
void main()
{
    int number1, number2, number3;
    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 ");
    scanf("%d", &number2);
    printf("Enter number 3 ");
    scanf("%d",&number3);

    printf("number is %d ,number 2 %d and number 3 is %d \n", number1, number2, number3);

    if(number1>number2)
    {
        if(number1>number3)
        {
            printf("number 1 is greter \n");
        }
        else
        {
            printf("number 3 is greter \n");
        }
    }
    else
    {
        if(number2>number3)
        {
            printf("number 2 is greter \n");
        }
        else
        {
            printf("number 3 is greter \n");
        }
    }
}