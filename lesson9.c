#include<stdio.h>
void main()
{
    int number1, number2,add,sub;
    
    printf("Enter value of number 1 =>  ");
    scanf("%d", &number1);
    printf("Enter value of number 2 =>  ");
    scanf("%d", &number2);

    printf("value of number 1 is %d \n", number1);
    printf("Value of number 2 is %d \n",number2);
    add = number1 + number2;
    printf("value of addition is %d \n", add);
    sub = number1 - number2;
    printf("value of subtraction is %d ", sub);
}