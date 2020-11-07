#include <stdio.h>
int main()
{
    float a,b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("\nEnter second number: ");
    scanf("%f", &b);

    if(a>b)
    {printf("%f is larger", a);}

    else if(a == b)
    {printf("Both numbers are equal");}

    else
    {printf("%f is larger", b);}

    return 0;

}