#include<stdio.h>
void main()
{
    int number, f_num, s_num;

    printf("Enter any two digit number ");
    scanf("%d", &number);

    printf("Value of number is %d \n", number);

    if(number<100) //25
    {
        f_num = number / 10; //2
        s_num = number % 10; // 5
        printf("first number is %d and last number is %d \n", f_num, s_num);
    }
    if(number>100)
    {
        printf("Invalide number \n");
    }
    printf("good byeee .........");
}