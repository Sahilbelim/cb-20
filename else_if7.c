// write a program to findout largest cyliender's volume from 3 cyliender dimensions using nested decision making statement 
#include<stdio.h>
void main()
{
    float h1, h2, h3, r1, r2, r3, v1, v2, v3,pi;
    pi = 3.14159;
    printf("Enter Value of cylinder 1 \n");
    printf("Enter height ");
    scanf("%f", &h1);
    printf("Enter radius ");
    scanf("%f", &r1);
    printf("Enter Value of cylinder 2\n");
    printf("Enter height ");
    scanf("%f", &h2);
    printf("Enter radius ");
    scanf("%f", &r2);
    printf("Enter Value of cylinder 3 \n");
    printf("Enter height ");
    scanf("%f", &h3);
    printf("Enter radius ");
    scanf("%f", &r3);

    v1 = pi * (r1 * r1) * h1;
    printf("Volume of cylinder 1 is %.2f\n", v1);
    v2 = pi * (r2 * r2) * h2;
    printf("Volume of cylinder 2 is %.2f\n", v2);
    v3 = pi * (r3 * r3) * h3;
    printf("Volume of cylinder 3 is %.2f\n", v3);
    if(v1>v2)
    {
        if(v1>v3)
        {
            printf("cylinder 1 is larger \n");
        }
        else
        {
            printf("cylinder 3 is larger \n");

        }
    }
    else if (v2>v1)
    {
        if (v2 > v3)
        {
            printf("cylinder 2 is larger \n");
        }
        else
        {
            printf("cylinder 3 is larger \n");
        }
    }
    else
    {
        printf("three are same  \n");
    }
    printf("Good byee ........");
}