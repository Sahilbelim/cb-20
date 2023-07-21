#include <stdio.h>
void main()
{
    int number, f_num, s_num;

    printf("Enter number ");
    scanf("%d", &number);

    printf("number is %d \n", number); // 45

    f_num = number / 10; // 4
    s_num = number % 10; // 5

    printf("first number is %d and second number is %d \n", f_num, s_num);

    printf("number is : ");

    if (f_num == 1)
    {
        printf("one ");
    }
    else if (f_num == 2)
    {
        printf("two ");
    }
    else if (f_num == 3)

    {
        printf("three ");
    }
    else if (f_num == 4)
    {
        printf("four ");
    }
    else if (f_num == 5)
    {
        printf("five ");
    }
    else if (f_num == 6)
    {
        printf("six ");
    }
    else if (f_num == 7)
    {
        printf("seven ");
    }
    else if (f_num == 8)
    {
        printf("eight ");
    }
    else if (f_num == 9)
    {
        printf("nine ");
    }
    else if (f_num == 0)
    {
        printf("zero ");
    }
    else
    {
        printf("invalide number \n");
    }

     if(s_num==1)
    {
        printf("one\n");
    }
    else if(s_num==2)
    {
        printf("two\n");
    }
    else if(s_num==3)
    {
        printf("three\n");
    }
    else if(s_num==4)
    {
        printf("four\n");
    }
    else if(s_num==5)
    {
        printf("five\n");
    }
    else if(s_num==6)
    {
        printf("six\n");
    }
    else if(s_num==7)
    {
        printf("seven\n");
    }
    else if(s_num==8)
    {
        printf("eight\n");
    }
    else if(s_num==9)
    {
        printf("nine\n");
    }
    else if(s_num==0)
    {
        printf("zero\n");
    }
    else
    {
        printf("invalide number \n");
    }
    printf("good byee .......");
}