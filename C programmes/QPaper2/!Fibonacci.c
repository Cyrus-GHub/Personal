#include <stdio.h>
int main()
{
    int i, j, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &i);
    printf("Fibonacci Series: ");

    for (j = 1; j <= i; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}