#include "stdio.h"

int main()
{
    int row, col, i, j, matrix1[100][100], matrix2[100][100], sum[100][100];
    printf("Enter the number of rows of array\n");
    scanf("%d", &row);
    printf("Enter the number of Column of array\n");
    scanf("%d", &col);

    printf("Enter the elements for first matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements for second matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Adding the matrices
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of matrices is : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
