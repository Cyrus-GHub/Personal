#include <stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\n List of available operators: +(add), -(subtract), *(multiply), /(divide)");
    printf("\n Enter Operator: ");
    scanf("%c", &op);

    printf("\n Enter second number: ");
    scanf("%d", &b);

    if (op = '+')
    {
        printf("%d", a + b);
    }

    else if (op = '-')
    {
        printf("%d", a - b);
    }

    else if (op = '*')
    {
        printf("%d", a * b);
    }

    else if (op = '/')
    {
        printf("%d", a / b);
    }

    else
    {
        printf("\n Invalid Operator");
        printf("\n List of available operators: +(add), -(subtract), *(multiply), /(divide)");
    }

    return 0;
}