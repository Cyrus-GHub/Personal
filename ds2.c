#include <stdio.h>
#include <string.h>

// Rows and Columns of the 2D Matrix
#define ROW 3
#define COL 4

// Function to Fill the 2D Matrix
int fill2DMatrix(int *arr2D, int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf(" %d", &arr2D[i * col + j]);
        }
    }
    return 0;
}

// Function to Display 2D Matrix
int display2DMatrix(int *arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(arr + (i * n + j)));
        }
        printf("\n");
    }
    return 0;
}

// Function to print a Single Dimensional Array
int display1DMatrix(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Function to Convert 2D Matrix to 1D Array
int convert_2D_to_1D_Column_Matrix(int *arr2D, int arr1D[], int row, int col)
{
    int idx = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++, idx++)
        {
            arr1D[idx] = *(arr2D + (j * col + i)); // arr[j][i] (Preferring Pointer for Generic Behavior)
        }
    }
    return 0;
}

// Function to Delete all Even Numbers from an 2D Matrix
int deleteEvenNumbers(int *arr2D, int arr1D[], int row, int col)
{
    int idx = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (*(arr2D + j * col + i) % 2 == 0)
                continue;

            arr1D[idx] = *(arr2D + j * col + i);
            idx++;
        }
    }
}

// Function to convert a 1D Matrix(Arranged in Column-Wise) to a 2D Matrix
int convert_1D_Row_Major_to_2D(int arr1D[], int *arr2D, int row, int col)
{
    int n = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, n++)
        {
            *(arr2D + (i * col) + j) = arr1D[n];
        }
    }
    return 0;
}

int main()
{
    int arr2D[ROW][COL] = {{1, 2, 3, 4},
                           {1, 2, 3, 4},
                           {1, 2, 3, 4}};
    int arr1D[ROW * COL] = {0};

    printf("Enter the elements of 2D Matrix (3x4) in Matrix Form:\n");
    printf("Use Space to Enter Row Data Change to Column Using Enter\n");
    printf("a | b | c | d \n");
    printf("--------------\n");
    printf("d | e | f | g\n");
    printf("--------------\n");
    printf("g | h | i | j\n");
    printf("\nNow Enter:\n\n");
    // fill2DMatrix((int *)arr2D, ROW, COL);
    printf("Thank you for providing the data:\n\n");

    /*
    Q1: Display a 2D Matrix
    */
    printf("\n2D Matrix\n");
    printf("----------\n");
    display2DMatrix((int *)arr2D, ROW, COL);

    /*
    Q2: A 2D Matrix is converted to 1D Matrix using the Column-major ordering.
    */
    printf("\n\nColumn-Wise Converted 2D Matrix\n");
    printf("----------\n");
    convert_2D_to_1D_Column_Matrix((int *)arr2D, arr1D, ROW, COL);
    display1DMatrix(arr1D, ROW * COL);

    /*
    Q3: Delete Even Numbers from a 2D Matrix

    (Running this function before Q2 in order to save space. arr1D is initialized
    with 0's and thus we will not have to separately add 0's for the even numbers.)

    */
    memset(arr1D, 0, sizeof(arr1D));
    printf("\n\nDelete Even Numbers (Fill with 0 at last)\n");
    printf("----------------------------------------\n");
    deleteEvenNumbers((int *)arr2D, arr1D, ROW, COL);
    display1DMatrix(arr1D, ROW * COL);

    /*
    Q4: A 1D Matrix ordered in row-major is converted to 2D Matrix.
    */

    printf("\n\n1D Row-Major Matrix to 2D\n");
    printf("----------\n");
    convert_1D_Row_Major_to_2D(arr1D, (int *)arr2D, ROW, COL);
    display2DMatrix((int *)arr2D, ROW, COL);

    return 0;
}
