#include <stdio.h>
int main()
{
    int mx[3][4], mx_duplicate[3][4], One_D_Matrix1[12], One_D_Matrix2[12], Even_Matrix[12], i, j, k = 0;

    printf("\n Enter data for matrix in the following form: \n");
    printf("\n a <space> b <space> c <space> d \n");
    printf("\n e <space> f <space> g <space> h \n");

    printf("\n Data: \n");

    // Input for a 3X4 matrix

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mx[i][j]);
        }
    }

    printf("\n 2-D Matrix: \n");

    // Print the 3X4 matrix

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mx[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Conversion to 1-D Matrix (Column-major)

    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            One_D_Matrix2[k] = mx[j][i];
            k++;
        }
    }

    printf("\n 1-D Matrix (Column-major): \n");

    // Print the 1-D Matrix (Column-major)

    for (i = 0; i < 12; i++) 
    {
        printf(" %d, ", One_D_Matrix2[i]);
    }

    // Duplicating original matrix for resolving garbage value error

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 4; j++)
        {
            mx_duplicate[3][4] = mx[i][j];
        }
    }

    // Conversion to 1-D Matrix (Row-major)

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 4; j++)
        {
            One_D_Matrix1[k] = mx_duplicate[i][j];
            k++;
        }
    }

    printf("\n");

    // Print the 1-D Matrix (Row-major)

    printf("\n 1-D Matrix (Row-major): \n");

    for (i = 0; i < 12; i++) 
    {
        printf(" %d, ", One_D_Matrix1[i]);
    }

    printf("\n");

    // Even number deletion

    for (i = 0; i < 12; i++) 
    {
        if (One_D_Matrix2[i] % 2 != 0)
            Even_Matrix[i] = One_D_Matrix2[i];

        else
            Even_Matrix[i] = 0;
    }

    printf("\n 1-D Matrix after even number deletion: \n");

    // Print the 1-D Matrix after even number deletion

    for (i = 0; i < 12; i++) 
    {
        printf(" %d, ", Even_Matrix[i]);
    }

    printf("\n");

    return 0;
}