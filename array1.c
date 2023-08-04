#include<stdio.h>
void main()
{
    int number[5],i;
    for (i = 0; i < 5;i++)
    {

        number[i] = 5;
        printf("%d \n",number[i]);

    }

    for (i = 0; i < 5;i++)
    {
        printf("Enter number ");
        scanf("%d", &number[i]);
        printf("%d \n",number[i]);
 }
    // printf("Enter number ");
    // scanf("%d", &number[1]);
    // printf("Enter number ");
    // scanf("%d", &number[2]);
    // printf("Enter number ");
    // scanf("%d", &number[3]);
    // printf("Enter number ");
    // scanf("%d", &number[4]);
}