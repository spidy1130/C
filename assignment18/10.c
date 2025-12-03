#include <stdio.h>

#define ROWS 4
#define COLS 4

int main() {
    int matrix[ROWS][COLS] = {{0, 0, 1, 1},{0, 1, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};

    int max_ones_count = 0;
    int row_with_max_ones = -1;

    for (int i = 0; i < ROWS; i++)
    {
        int current_ones_count = 0;
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] == 1)
            {
                current_ones_count++;
            }
        }

        if (current_ones_count > max_ones_count)
        {
            max_ones_count = current_ones_count;
            row_with_max_ones = i;
        }
    }

    if (row_with_max_ones != -1)
    {
        printf("The row with the maximum number of 1s is row %d .\n", row_with_max_ones+1);
        printf("It contains %d ones.\n", max_ones_count);
    }
    else
    {
        printf("No 1s found in the matrix.\n");
    }

    return 0;
}