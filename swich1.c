#include<stdio.h>
void main()
{
    char letter;
    printf("Enter letter ");
    scanf("%c", &letter);

    switch (letter)
    {
        case 'a':
            printf("it's vowel ");
            break;
        case 'e':
            printf("it's a vowel ");
            break;

        case 'i':
            printf("it's a vowel ");
            break;

        case 'o':
            printf("it's a vowel ");
            break;

        case 'u':
            printf("it's a vowel ");
            break;
        case 'A':
            printf("it's vowel ");
            break;
        case 'E':
            printf("it's a vowel ");
            break;

        case 'I':
            printf("it's a vowel ");
            break;

        case 'O':
            printf("it's a vowel ");
            break;

        case 'U':
            printf("it's a vowel ");
            break;

        default:
            printf("it's not vowel ");
    }
   
}