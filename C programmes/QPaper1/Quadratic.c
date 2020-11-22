// Find roots of ax^2+bx+c=0
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, R1, R2, real, img; // a,b,c are coefficients, D is discriminant, R1 & R2 are the roots

    printf("Enter coefficients a, b and c (in format a <space> b <space> c): ");
    scanf("%f %f %f", &a, &b, &c);

    D = ((b * b) - 4 * a * c);

    if (D > 0)
    {
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);

        printf("\n %.3f and %.3f are the roots of the quadratic equation", R1, R2);
    }

    else if (D == 0)
    {
        R1 = R2 = (-b / 2 * a);

        printf("\n %.3f and %.3f are the common roots of the quadratic equation", R1, R2);
    }

    else
    {
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);

        printf("%.3f + %.3fi and %.3f - %.3fi are the roots of the quadratic equation", real, img, real, img);
    }

    return 0;
}