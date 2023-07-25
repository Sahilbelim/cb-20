// write a program to findout whether given letter is vowel or not
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter letter : ");
    scanf("%c", &letter);

    if(letter=='a' ||letter=='e' || letter == 'i' ||letter == 'o' || letter== 'u' )
    {
        printf("it's a vowel \n");
    }
    else
    {
        printf("it's not a vowel \n");
    }
    printf("good byee........");
}