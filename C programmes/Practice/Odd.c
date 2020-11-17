// This program prints a series only containing odd numbers except 1 and multiples of 3 but includes 3 itself like: 3 5 7 11 13 17

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter largest number in series: ");
    scanf("%d", &n);
    printf("\n Series: ");

    while (i <= n)
    {

        if (i == 3)
        {
            printf("%d, ", i);
            i++;
        }

        else if (i % 3 == 0 || i % 2 == 0 || i == 1)
        {
            i++;
            continue;
        }

        else if (i == n)
        {
            printf("%d ", i);
            break;
        }

        else
        {
            printf("%d, ", i);
            i++;
        }
    }
    return 0;
}