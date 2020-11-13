#include <stdio.h>
int main()
{
    double a, b, result;
    int flag;
    char op;
    char str[] = "Invalid Operator";

    printf("\n Enter an operator: ");
    scanf("%c", &op);

    printf("Enter numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        flag = 0;
        printf("%s", str);
        break;
    }

    printf("\n %.3lf %c %.3lf = %.3lf", a, op, b, result);

    return 0;
}