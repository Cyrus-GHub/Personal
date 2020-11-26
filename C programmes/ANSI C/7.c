#include <stdio.h>

float add();
float sub();

int main()
{
    add();

    printf("\n");
    printf("\n");
    printf("\n");

    sub();
    return 0;
}

float add()
{
    float a, b, r;

    printf("Enter 2 numbers: ");
    scanf("%f %f", &a, &b);

    r = a + b;
    printf("%f + %f = %f", a, b, r);

    return 0;
};

float sub()
{
    float a, b, r;

    printf("Enter 2 numbers: ");
    scanf("%f %f", &a, &b);
    
    r = a - b;
    printf("%f - %f = %f", a, b, r);

    return 0;
};