/*
_____*
____* *
___* * *
__* * * *
_* * * * *
*/
#include<stdio.h>
void main()
{
    int i, j, k,temp,flash,num;
    // flash = 1;
    printf("Enter number ");
    scanf("%d", &num);
    temp = num;

    for (i = 1; i <= num;i++)
    {
        for (j = 1; j <= temp; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
        // flash++;
        temp--;
    }
}

// _*
// _____******

// _____******
// _____******
// _____******
// _____******
// _____******
