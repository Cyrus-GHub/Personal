#include <stdio.h>
int main()
{
    int a, i;
    char num;

    printf("Enter number: ");
    scanf("%d", &a);

    for (i = 2; i <= a/2; i++) // Why a/2?
    {
        if (a % i == 0)
        {
            num = 'C';
            break;
        }
    }

    if (a == 1)
    {
        printf("\n 1 is neither prime nor composite");
    }

    else if (num == 'C')
    {
        printf("\n %d is not a prime number", a);
    }

    else
    {
        printf("\n %d is a prime number", a);
    }

    return 0;
}