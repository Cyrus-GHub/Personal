#include <stdio.h>
int main()
{
    float s1, s2, s3;

    printf("\n Enter sides of the triangle: ");
    scanf("%f%f%f", &s1, &s2, &s3);

    if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("\n The triangle is isoceles");
    }

    else
    {
        printf("\n The triangle is NOT isoceles");
    }

    return 0;
}