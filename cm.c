#include <stdio.h>
int main()
{
    int mx[3][4], One_D_Matrix2[12], i, j, k = 0;

    printf("\n Enter data for matrix in the following form: \n");
    printf("\n a <space> b <space> c <space> d \n");
    printf("\n e <space> f <space> g <space> h \n");

    printf("\n Data: \n");

    for (i = 0; i < 3; i++) // Input for a 3X4 matrix
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mx[i][j]);
        }
    }

    printf("\n 2-D Matrix: \n");
    for (i = 0; i < 3; i++) // Print the 3X4 matrix
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mx[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 4; i++) // Conversion to 1-D Matrix (Column-major)
    {
        for (j = 0; j < 3; j++)
        {
            One_D_Matrix2[k] = mx[j][i];
            k++;
        }
    }

    printf("\n 1-D Matrix (Column-major): \n");

    for (i = 0; i < 12; i++) // Print the 1-D Matrix (Column-major)
    {
        printf(" %d, ", One_D_Matrix2[i]);
    }

    return 0;
}