#include <stdio.h>
int main()
{
    int a, b, h, i;

    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && a % i == 0)
            h = i;
    }

    printf("HCF of %d and %d is %d", a, b, h);

    return 0;
}