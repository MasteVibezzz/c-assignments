#include <stdio.h>

int add_matrices (int a[][10], int b[][10], int result[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return 0;
}

int subtract_matrices (int a[][10], int b[][10], int result[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return 0;
}

int multiply_matrices (int a[][10], int b[][10], int result[][10], int rows_a, int cols_a, int cols_b)
{
    for (int i = 0; i < rows_a; i++)
    {
        for (int j = 0; j < cols_b; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols_a; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}

int transpose_matrix (int a[][10], int result[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = a[i][j];
        }
    }
    return 0;
}

int print_matrix (int a[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main ()
{
    int row1, col1, row2, col2;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int transA[10][10], transB[10][10];

    //Input for first matrix
    printf("Enter rows and columns for first matrix: "); 
    scanf("%d %d", &row1, &col1);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    //Input for second matrix
    printf("Enter rows and columns for second matrix: "); 
    scanf("%d %d", &row2, &col2);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    //Addition
    if (row1 == row2 && col1 == col2)
    {
        add_matrices(matrix1, matrix2, result, row1, col1);
        printf("Sum of the two matrices:\n");
        print_matrix(result, row1, col1);
    }
    else
    {
        printf("Addition not possible due to dimension mismatch.\n");
    }

    //Subtraction
    if (row1 == row2 && col1 == col2)
    {
        subtract_matrices(matrix1, matrix2, result, row1, col1);
        printf("Difference of the two matrices:\n");
        print_matrix(result, row1, col1);
    }
    else
    {
        printf("Subtraction not possible due to dimension mismatch.\n");
    }

    //Multiplication
    if (col1 == row2)
    {
        multiply_matrices(matrix1, matrix2, result, row1, col1, col2);
        printf("Product of the two matrices:\n");
        print_matrix(result, row1, col2);
    }
    else
    {
        printf("Multiplication not possible due to dimension mismatch.\n");
    }

    //Transpose
    transpose_matrix(matrix1, transA, row1, col1);
    printf("Transpose of first matrix:\n");
    print_matrix(transA, col1, row1);
    transpose_matrix(matrix2, transB, row2, col2);
    printf("Transpose of second matrix:\n");
    print_matrix(transB, col2, row2);

    return 0;
}