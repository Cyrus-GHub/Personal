#include <stdio.h>
int main()
{
    float marks;
    char grade;

    printf("Enter total marks acquired: ");
    scanf("%f", &marks);

    if (marks >= 91)
    {
        grade = 'O';
        printf("Your grade is %c", grade);
    }

    else if (marks >= 81)
    {
        grade = 'E';
        printf("Your grade is %c", grade);
    }

    else if (marks >= 71)
    {
        grade = 'A';
        printf("Your grade is %c", grade);
    }

    else if (marks >= 61)
    {
        grade = 'B';
        printf("Your grade is %c", grade);
    }

    else if (marks >= 51)
    {
        grade = 'C';
        printf("Your grade is %c", grade);
    }

    else
    {
        grade = 'F';
        
        printf("Your grade is %c", grade);
    }

    printf("\n");
    printf("\n O = Outstanding, E = Excellent, (A, B, C) follow grading convention, F = Fail");

    return 0;
}