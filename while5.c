// Write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
     int number = 0;
     int count = 1;

     while(number <= 1000)
     {
          printf("%d ", number); // 0
          number = number + count; // 10
          count = count + 1; //5
     } // 2
     // printf("%d ",number);// 1
     // number = number + count ;
     // count = count + 1;//3
     // printf("%d ",number);// 3
     // number = number + count;
     // count = count + 1;
     // printf("%d ",number);// 6
     // printf("%d ",number);// 10
     // number = number + 5 ;
     // printf("%d ",number);// 15
     // number = number + 6 ;
     // printf("%d ",number);// 21
}