#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    if(a>b)
    {printf("%d is larger", a);}

    else if(a == b)
    {printf("Both numbers are equal");}

    else
    {printf("%d is larger", b);}

    return 0;

}