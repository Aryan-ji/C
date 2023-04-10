#include "stdio.h"

int main()
{
    int col1, row1, col2, row2, i, j, k, matrix1[100][100], matrix2[100][100], product[100][100];

    printf("Enter the value of row for first matrix");
    scanf("%d", &row1);
    printf("Enter the value of col for first matrix");
    scanf("%d", &col1);

    printf("Enter the value of row for second matrix");
    scanf("%d", &row2);
    printf("Enter the value of col for second matrix");
    scanf("%d", &col2);

    printf("Enter the element of first matrix");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the element of second matrix");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (col1 != row2)
    {
        printf("Matrix cannot be multiplied!");
        return 0;
    }

    // multiplying the matrices

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("product of two matrices are : \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}