#include<stdio.h>
void main()
{
    int month;

    printf("Enter month : ");
    scanf("%d", &month);

    
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month ==12)
    {
        printf("month %d of days is 31\n", month);
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("month %d of days is 30\n", month);
       
    }
    else if (month==2)
    {
        printf("month %d of days is 28\n", month);
       
    }
    else
    {

        printf("invalide month \n");
    }

    printf("good byee ...........");
}