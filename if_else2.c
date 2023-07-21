#include<stdio.h>
void main()
{
    int year;

    printf("Enter year ");
    scanf("%d", &year);

    printf("given year is %d \n", year);

    if(year%4==0)
    {
        printf(" that is leap year \n");
    }
    else
    {
        printf("that not a leap year \n");
    }
    printf("Good byee .........");
}