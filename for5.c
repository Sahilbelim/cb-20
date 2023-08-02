// Write a programe to print numbered half pyramid
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <stdio.h>
void main()
{
     int count = 0;
     int flash = 0;
     for(flash= 1;flash<6;flash++)
     {
          for (count = 1; count <= flash; count=count+1)
          {
               printf("%d ",flash);
          }
          printf("\n");
     }
     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for(count = 0 ;count < 4;count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for(count = 0 ;count<5;count++)
     // {
     //      printf("*");
     // }
     // printf("*");
     // printf("*");
}