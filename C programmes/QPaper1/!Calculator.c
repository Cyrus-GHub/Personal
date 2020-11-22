#include <stdio.h>
int main()
{
    float a, b, ad, su, mu, di;
    char op;

    printf("\n List of available operators: +(add), -(subtract), *(multiply), /(divide)");
    printf("\n Enter Operator: ");
    scanf("%c", &op);

    printf("Enter numbers: ");
    scanf("%f %f", &a, &b);

    if (op = '+')
    {
        ad = a + b;
        printf("%f", ad);
    }

    else if (op = '-')
    {
        su = a - b;
        printf("%f", su);
    }

    else if (op = '*')
    {
        mu = a * b;
        printf("%f", mu);
    }

    else if (op = '/')
    {
        di = a / b;
        printf("%f", di);
    }

    else
    {
        printf("\n Invalid Operator");
        printf("\n List of available operators: +(add), -(subtract), *(multiply), /(divide)");
    }

    return 0;
}