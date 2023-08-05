#include<stdio.h>
void main()
{
    float r[5],area[5],pi;
    pi = 3.14159;
    int i;

    for (i = 0; i < 5;i++)
    {
        printf("Enter radius of circle %d ",i+1);
        scanf("%f",&r[i]);
   }
   for (i = 0; i < 5;i++)
   {
        area[i] = pi * (r[i] * r[i]);
        printf("Area of circle %d is %.2f \n",i+1, area[i]);
    }
    
}