#include <stdio.h>
int main()
{
    int a, sum = 0, b;

    printf("Enter number: ");
    scanf("%d", &a);

    while (a > 0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}