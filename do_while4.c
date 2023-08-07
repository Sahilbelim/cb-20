#include<stdio.h>
void main()
{
 
    int row, col1, col2,temp;
    temp = 5;
    row = 1;
    do
 {
     col1 = 1;
     do
     {
         printf(" ");
         col1++;
     } while (col1 <= row);

     col2 = 1;
     do
     {
        if(row==1 || col2==1 || temp==col2 )
        {

         printf("* ");
        }
        else
        {
         printf("  ");
        }
         col2++;
     } while (col2 <= temp);
     printf("\n");
     row++;
     temp--;
 } while (row <= 5);

}