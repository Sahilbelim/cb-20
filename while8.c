// Write a programe to print half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     
     
     while(flash < 6)
     {
          while (count <= flash)
          {
               printf("*");
               count++;
          }
          printf("\n");
          count = 0;
          flash++;
     }
     // while (count < 3)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count=0;
     // while(count < 5)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}