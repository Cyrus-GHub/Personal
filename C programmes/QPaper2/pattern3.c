#include <stdio.h>
int main()
{
    int i, j, k, n;
    char al[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {
        for (j = 0; j < i; j++)
        {
            printf("%c", al[j]);
        }

        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}