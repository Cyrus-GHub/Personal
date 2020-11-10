#include <stdio.h>
int main()
{
    int i, num, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= num - 1; i++)
    {
        rem = num % i;
        if (rem == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number", num);

    else
    {
        printf("%d is NOT a perfect number", num);
    }

    return 0;
}