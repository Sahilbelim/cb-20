// Write a programe to print numbered half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
    


     for(flash= 0;flash<5;flash++)
     {
          for (count = 0; count <= flash; count++)
          {
               printf("%d ",count+1);
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