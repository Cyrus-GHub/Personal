#include <stdio.h>
int main()
{
    float a, b, c, x;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    x = a / (b - c);

    printf("%f", x);
    return 0;
}