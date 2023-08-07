#include <stdio.h>
void main()
{
    int row, col,num;

    row = 1;
    printf("Enter number : ");
    scanf("%d", &num);

    do
   {
       col = 1;
       do
       {
           printf("* ");
           col++;
       } while (col <= row);
       printf("\n");
       row++;
   } while (row<=num);
}