#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)

    {
        for (j = 0; j < i; j++)
            printf("$");

        for (j = 0; j < n - i; j++)
            printf(" ");

        printf("\n");
    }

    return 0;
}