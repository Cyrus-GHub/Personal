#include <stdio.h>
int main()
{
    int m1, m2, n1, n2, i, j;

    printf("\n We will be multiplying Matrix 1 with Matrix 2");
    printf("\n");

    printf("\n Enter the size of matrix 1 in the following format: row <space> column: "); // User defines the size of the first matrix
    scanf("%d %d", &m1, &n1);

    int mx1[m1][n1];

    printf("\n Enter data for matrix 1 in the following form: \n");
    printf("\n a <space> b <space> c <space> d \n");
    printf("\n e <space> f <space> g <space> h \n");

    printf("\n Enter Data: \n"); // Data entry for first matrix starts

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &mx1[i][j]);
        }
    }

    printf("\n Enter the size of matrix 2 in the following format: row <space> column: "); // User defines the size of the first matrix
    scanf("%d %d", &m2, &n2);

    int mx2[m2][n2];

    printf("\n Enter data for matrix in the previously specified form: \n");

    printf("\n Enter Data: \n"); // Data entry for second matrix starts

    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &mx2[i][j]);
        }
    }

    if (n1 == m2) // Multiplication process
    {
        
    }

    else
    {
        printf("\n The matrices can't be multiplied"); // Error message
    }

    return 0;
}