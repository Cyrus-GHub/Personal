#include <stdio.h>
int main()
{
    int a, i, f;

    printf("Enter number: ");
    scanf("%d", &a);

    for (i = a; i <= 0; i--)
    {
        f = i * (--i);
        printf("%d", f);
    }

    return 0;
}