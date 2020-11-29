// This program takes input for an array of intergers and then prints out postive and negative integers seperately

#include <stdio.h>
int main()
{
    int i, n, pc = 0, nc = 0, z = 0, arr[1000], pos[1000], neg[1000];

    printf("\n Enter number of integers to be stored in array: ");
    scanf("%d", &n);

    for (i = 0; i <= n - 1; i++)
    {
        printf("\n Enter data to be stored in array: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] > 0)
        {
            pos[i] = arr[i];
            pc += 1;
        }

        else if (arr[i] == 0)
        {
            z += 1;
        }

        else
        {
            neg[i] = arr[i];
            nc += 1;
        }
    }

    printf("\n Here, '0' represents empty");

    printf("\n Positive integers: ");
    for (i = 0; i <= pc + nc - 1; i++)
    {
        printf(" %d ", pos[i]);
    }

    printf("\n Negative integers: ");
    for (i = 0; i <= pc + nc - 1; i++)
    {
        printf(" %d ", neg[i]);
    }

    printf("\n \n Number of positive elements in the array: %d", pc);
    printf("\n \n Number of negative elements in the array: %d", nc);
    printf("\n \n Number of 'zeroes' in the array: %d", z);

    printf("\n");
    printf("\n");

    return 0;
}