// Write a programe to create a calc
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulus
// ->max
// ->min
// ->equality
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;
     int option = 0;
     int answer = 0;
     printf("Enter value of number 1 ");
     scanf("%d", &number1);

     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modulus ");
     printf("\nEnter 6 for max ");
     printf("\nEnter 7 for min ");
     printf("\nEnter 8 for eqaulity ");
     printf("\nSelect any one option ");
     scanf("%d", &option);

     switch (option)
     {
     case 1:
          answer = number1 + number2;
          printf("The answer is %d ", answer);
          break;

     case 2:
          answer = number1 - number2;
          printf("The answer is %d ", answer);
          break;

     case 3:
          answer = number1 * number2;
          printf("The answer is %d ", answer);
          break;

     case 4:
          answer = number1 / number2;
          printf("The answer is %d ", answer);
          break;

     case 5:
          answer = number1 % number2;
          printf("The answer is %d ", answer);
          break;

     case 6:
          if (number1 > number2)
          {
               printf("number 1 is greater ");
          }
          else
          {
               printf("number 2 is greater ");
          }
          break;

     case 7:
          if (number1 < number2)
          {
               printf("number 1 is smaller ");
          }
          else
          {
               printf("number 2 is smaller ");
          }
          break;

     case 8:
          if (number1 == number2)
               printf("Both are same ");
          else
               printf("Both are not same ");
          break;

     default:
          printf("Invalid option ");
          break;
     }
}