#include<stdio.h>
void main()
{
    float height, weight, bmi,f_to_m,i_to_m;
    int foot, inch;

    printf("Enter weight in kg : ");
    scanf("%f", &weight);
    printf("Enter height in foot : ");
    scanf("%d", &foot);
    printf("Enter height in inch : ");
    scanf("%d", &inch);

    // printf("Value of weight is %.2f and value of height in foot %d and inch %d ", weight, foot, inch);
    f_to_m = foot * 0.3048;
    i_to_m = inch / 39.37;
    height = f_to_m + i_to_m;

    // printf("\nheight is %f", height);

    bmi = weight / (height * height);

    printf("BMI is %.2f", bmi);

    if(bmi>0 && bmi<18)
    {
        printf("\n underweight ");
    }
    else if(bmi>18 && bmi<25 )
    {
        printf("\n normal ");

    }
    else if (bmi>25 && bmi <40)
    {
        printf("\n overweigth ");
    }
    else if(bmi>40)
    {
        printf("\n obese ");
    }
    else
    {
        printf("invalide input ");
    }
    printf("\ngood byee  .................");
}