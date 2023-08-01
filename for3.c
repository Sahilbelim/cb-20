#include <stdio.h>
void main()
{
     int count = 0;
     int flash = 0;
     for (count = 0; count < 7; count++)
     {
          printf("*");
     }
     for(flash = 4 ; flash > 0 ; flash--)
     {
          printf("\n");
          printf("*");
          for (count = 0; count < flash; count++)
          {
               printf(" ");
          }
          printf("*");
     }
     printf("\n");
     printf("*");
     // for(count = 0;count<2;count++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
}