// Find roots of ax^2+bx+c=0

// ERROR: IMAGINARY ROOTS DON'T SHOW i PART
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, R1, R2, real, img; // a,b,c are coefficients, D is discriminant, R1 & R2 are the roots
    int Dtype;
    char str[] = "Error";

    printf("Enter coefficients a, b and c (in format a <space> b <space> c): ");
    scanf("%f %f %f", &a, &b, &c);

    D = ((b * b) - 4 * a * c);

    if (D > 0)
        Dtype = 1;

    else if (D = 0)
        Dtype = 2;

    else
        Dtype = 3;



    switch (Dtype)
    {
    case 1:
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);

        printf("\n %.3f and %.3f are the roots of the quadratic equatoin", R1, R2);
        break;

    case 2:
        R1 = R2 = (-b / 2 * a);

        printf("\n %.3f and %.3f are the common roots of the quadratic equatoin", R1, R2);
        break;

    case 3:
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);

        printf("%.3f + %.3fi and %.3f - %.3fi are the roots of the quadratic equatoin", real, img, real, img);
        break;

    default:
        printf("%s", str);
    }

    return 0;
}
    