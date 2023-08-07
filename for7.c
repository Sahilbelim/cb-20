#include<stdio.h>
void main()
{
    int row, col1, col2,temp=5;
    for (row = 1; row <= 5;row++)
    {
        for (col1 = 1; col1 <= temp; col1++)
        {
            printf(" ");
        }
        for (col2 = 1; col2 <= row; col2++)
        {
            if(row==5 || row==col2 || col2==1 )
            {

            printf("* ");
            }
            else
            {
            printf("  ");
            }
        }
        printf("\n");
        temp--;
    }

}