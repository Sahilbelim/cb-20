// write a program to fing area of cylinder.
// area = 2 * pi * r * h + 2 * pi * r * r;
#include<stdio.h>
void main()
{
    int r, h;
    float area,pi;
    pi = 3.14159;
    r = 3;
    h = 10;
    area = 0;
    printf(" value of radius is %d \n", r);
    printf(" value of height is %d \n", h);
    area = 2 * pi * r * h + 2 * pi * r * r;
    printf(" value of area is %f ", area);
}