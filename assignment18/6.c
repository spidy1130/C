#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    printf("\nColumn sums:\n");
    for (int j = 0; j < cols; j++)
    {
        int colSum = 0;
        for (int i = 0; i < rows; i++)
        {
            colSum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}