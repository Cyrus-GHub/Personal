#include <stdio.h>
int main()
{
    int i, j, t1 = 0, t2 = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &i);
    printf("\n Fibonacci Sequence: ");

    for (j = 0; j <= i; ++j)

    {
        printf("%d,", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}