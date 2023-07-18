// write a program to find area of triangle of user given number .
// area = height*base/2
#include<stdio.h>
void main()
{
    int h, b;
    float area;

    printf(" Enter value of height ");
    scanf("%d", &h);
    printf("Enter  value of base ");
    scanf("%d", &b);

    printf("value of height is %d and base is %d \n", h, b);
    area = (h * b) / 2;
    printf(" area of triangle is %.2f ", area);
}