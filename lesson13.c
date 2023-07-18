// write a program to find bmi for user give height and weight .
// bmi=weight/height *height.
// weight
// foot_height
// inch_height
#include <stdio.h>
void main()
{
    float weight, foot_meter, inch_meter, height, bmi;
    int foot_h, inch_h;

    printf("Enter your weight ");
    scanf("%f", &weight);

    printf("Enter your height in foot ");
    scanf("%d", &foot_h);

    printf("Enter your height in inch ");
    scanf("%d", &inch_h);

    // printf(" wight = %.2f , height in foot %d and inch %d ",weight,foot_h,inch_h );

    foot_meter = foot_h * 0.3048;
    
    inch_meter = inch_h / 39.37;

    height = foot_meter + inch_meter;

    printf(" height is %.2f and weight is %.2f", height, weight);

    bmi = weight / (height * height);

    printf(" \nYour BMI is %.2f ", bmi);
}