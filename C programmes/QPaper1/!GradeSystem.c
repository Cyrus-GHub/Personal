#include <stdio.h>
int main()
{
    float marks;
    int c;
    char grade;

    printf("Enter total marks secured: ");
    scanf("%d", &marks);

    if (marks >= 91 && marks <= 100)
    {
        c = 1;
    }

    else if (marks >= 81 && marks < 91)
    {
        c = 2;
    }

    else if (marks >= 71 && marks < 81)
    {
        c = 3;
    }

    else if (marks >= 61 && marks < 71)
    {
        c = 4;
    }

    else if (marks >= 51 && marks < 61)
    {
        c = 5;
    }

    else
    {
        c = 6;
    }

    switch (c)
    {
    case 1:
        grade = 'O';
        printf("%c", grade);
        break;
    case 2:
        grade = 'E';
        printf("%c", grade);
        break;
    case 3:
        grade = 'A';
        printf("%c", grade);
        break;
    case 4:
        grade = 'B';
        printf("%c", grade);
        break;
    case 5:
        grade = 'C';
        printf("%c", grade);
        break;
    case 6:
        grade = 'F';
        printf("%c", grade);
        break;
    default:
        grade = 'X';
        printf("%c", grade);
    }

    return 0;
}