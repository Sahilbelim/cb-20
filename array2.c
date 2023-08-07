#include<stdio.h>
void main()
{
    int num[5],i,add,sub;

    for (i = 0; i < 5;i++)
    {
        printf("Enter Value of number %d ::: ",i+1);
        scanf("%d", &num[i]);
     }
     for (i = 0; i < 5;i++)
     {
        printf("Value of number %d is %d \n",i+1, num[i]);
     }

     add = num[0] + num[1] + num[2] + num[3] + num[4];
     printf("Addition is %d \n", add);

     sub = num[0] - num[1] -  num[2] - num[3] - num[4];
     printf("subtraction  is %d \n", sub);
}