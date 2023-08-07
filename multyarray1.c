#include<stdio.h>
void main()
{
    int number[2][2],i,j;

    // number[0][0] = 20;
    // number[0][1] = 10;
    // number[1][0] = 30;
    // number[1][1] = 40;

    for (j = 0; j < 2;j++)
    {
        for (i = 0; i < 2;i++)
        {
            printf("Enter number ");
            scanf("%d", &number[j][i]);
            printf("Value of number is %d \n", number[j][i]);
       } 
      
    }


    
}