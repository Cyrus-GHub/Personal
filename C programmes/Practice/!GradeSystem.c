#include <stdio.h>
int main()
{
    float marks;
    int c;
    char grade;

    printf("Enter total marks secured: ");
    scanf("%d", &marks);

    if (marks >= 91)
    {
        c = 1;
    }

    else if (marks >= 81)
    {
        c = 2;
    }

    else if (marks >= 71)
    {
        c = 3;
    }

    else if (marks >= 61)
    {
        c = 4;
    }

    else if (marks >= 51)
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
        break;
    case 2:
        grade = 'E';
        break;
    case 3:
        grade = 'A';
        break;
    case 4:
        grade = 'B';
        break;
    case 5:
        grade = 'C';
        break;
    case 6:
        grade = 'F';
        break;
    default:
        grade = 'X';
    }

    printf("\n Your Grade is: %c ", grade);

    return 0;
}