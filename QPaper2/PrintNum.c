#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter initial number: ");
    scanf("%d", &a);

    printf("Enter last number: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        printf("\n %d", i);
    }

    return 0;
}