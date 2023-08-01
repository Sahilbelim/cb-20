// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
// 1  4   7   10  13  16  19  21  24
// 1  3  3  3  3  3  3  3 3 3
#include <stdio.h>
void main()
{
     int number = 1;
     int count = 0;

     for(count = 4; number < 3000 ; count=count + 3)
     {
          printf("%d ", number);
          number = number + count;
     } // 5
     // printf("%d ", number);
     // number = number + 7; // 12
     // printf("%d ", number);
     // number = number + 10;
     // printf("%d ", number);
     // number = number + 13;
     // printf("%d ", number);
}