// Write a programe to print mutliplication table of 5
// 5 X 1  = 5
// 5 X 2  = 10
// 5 X 3  = 15
// .....
// 5 X 10  = 50
#include <stdio.h>
void main()
{
     int table = 0;
     int multiplier = 1;
     int answer = 0;

     printf("Enter Number for table ");
     scanf("%d",&table);

     for (table = table; multiplier <= 10; multiplier++)
     {
          answer = table * multiplier;
          printf("\n%d X %d = %d", table, multiplier, answer);
          // 2
     }
     // printf("\n%d X %d = %d",table,multiplier,answer);
     // multiplier++; // 3
     // answer = table * multiplier; // 15
     // printf("\n%d X %d = %d",table,multiplier,answer);
     // multiplier++; // 4
     // answer = table * multiplier; // 20
     // printf("\n%d X %d = %d",table,multiplier,answer);
}