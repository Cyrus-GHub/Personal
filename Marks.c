#include <stdio.h>
int main()
{
    float a, b, marks[72];
    int i = 0, roll, rank, next, largest = -2147483648;

    for (roll = 191; roll <= 260; roll++, i++)
    {
        printf("\n For Roll no. %d, enter marks of Section A <space> marks of Section B : \n", roll);
        scanf("%f %f", &a, &b);
        marks[i] = a + b;
    }

    for (roll = 630; roll <= 631; roll++)
    {
        i = 70;
        printf("\n For Roll no. %d, enter marks of Section A <space> marks of Section B : \n", roll);
        scanf("%f %f", &a, &b);
        marks[i] = a + b;
        i++;
    }

    printf("\n");

    for (i = 0; i < n; j++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
        }
    }

    return 0;
}