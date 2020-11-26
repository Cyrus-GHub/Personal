#include <stdio.h>
int main()
{
    float d, t, s;

    printf("Enter distance travelled (in meteres): ");
    scanf("%f", &d);

    printf("Enter time taken (in seconds): ");
    scanf("%f", &t);

    s = d / t;

    printf("SPEED = %.3f m/s", s);
    return 0;
}