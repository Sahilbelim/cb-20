// Write a programe to findout factorial of given number
// 5 = 5* 4 *3*2*1 = 120
#include <stdio.h>
void main()
{
     int number;
     int answer;
     int count = 2;
     printf("Enter value of number ");
     scanf("%d", &number);

     if (number > 0)
     {
          if (number == 1)
          {
               printf("Your answer is 1 ");
          }
          else if (number == 2)
          {
               printf("your answer is 2 ");
          }
          else
          {
               // number = 5;
               answer = number * (number - 1); // 20
               do
               {
                    answer = answer * (number - count);
                    count++;
               } while (count < number);
               // 60
               // answer = answer * (number - 3);//120
               // answer = answer * (number - 4);//120
               printf("Your answer is %d ", answer);
          }
     }
     else
     {
          printf("Number cannot be negative ");
     }
}
