// Write a programe to findout how many days a month has accpect month from user
#include<stdio.h>
void main()
{
    int month, date;
    printf("Enter month ");
    scanf("%d", &month);
    printf("Enter date ");
    scanf("%d", &date);

    printf("Month is %d and Date is %d \n", month, date);
    if (month==1 || month==3 || month==5 ||month==7 ||month==8|| month==10|| month==12)
    {
        if (date>=1 && date<=31)
        {
            printf("date is valide \n");
        }
        else
        {
            printf("date  is Invalide \n");
            
        }
        
    }
    else if (month==4|| month==6 ||month==9 ||month==11)
    {
        if(date>=1 && date<=30)
        {
            printf("date  is valide \n");

        }
        else
        {
            printf("date  is Invalide \n");
            
        }
    }
    else if (month==2 )
    {
        if (date >=1 && date <= 29)
        {
            printf("date  is valide \n");
        }
        else
        {
            printf("date  is Invalide \n");
        }
    }
    else
    {
        printf("Invalide month and date  \n");
    }
    
    
}