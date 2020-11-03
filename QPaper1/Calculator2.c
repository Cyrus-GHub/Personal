#include <stdio.h>
int main()
{
    float a,b,result;
    char op;
    char str[] = "Invalid Operator";

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("\n Enter an operator: ");
    scanf("%c", &op);

    printf ("\n Enter second number: ");
    scanf("%f", &b);

    switch (op)
    {
        case '+': result= a+b; break;
        case '-': result= a-b; break;
        case '*': result= a*b; break;
        case '/': result= a/b; break;
        default : printf("%s", str); break;  
    }

    printf("\n %f %c %f = %f", a, op, b, result);

    return 0;
}