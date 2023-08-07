#include <stdio.h>
void main()
{
    int marks[5][5];
    int count = 0;
    int flash = 0;
    int total[5];
    float average;
    for (flash = 0; flash < 5; flash++)
    {
        printf("Enter student %d marks \n", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("Enter subject %d marks ", count + 1);
            scanf("%d", &marks[flash][count]);
        }
    }

    for (flash = 0; flash < 5; flash++)
    {
        printf("\nMarks of Student %d are ", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nMarks of Subject %d = %d ", count + 1, marks[flash][count]);
        }
    }

    for (flash = 0; flash < 5; flash++)
    {
        total[flash] = 0;
        for (count = 0; count < 5; count++)
        {
            total[flash] = total[flash] + marks[flash][count];
        }
    }
    for (count = 0; count < 5; count++)
    {
        printf("\nThe value total of student %d is %d ", count + 1, total[count]);
    }
    average = 0;
    for(count = 0 ; count <5 ;count++)
    {
        average = average + total[count];
    }
    average = average / 5 ;
    printf("\n\nThe value of average is %f ",average);
    // average = average + total[1];
    // average = average + total[2];
    // average = average + total[3];
    // average = average + total[4];
    // printf("\nThe value total of student 2 is %d ", total[1]);
    // printf("\nThe value total of student 3 is %d ", total[2]);
    // total[1] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[1] = total[1] + marks[1][count];
    // }
    // total[2] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[2] = total[2] + marks[2][count];
    // }
}