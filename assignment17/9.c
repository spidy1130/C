#include <stdio.h>

void mergeDescending(int a[], int b[], int n, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < n)
    {
        if (a[i] >= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n)
        result[k++] = a[i++];

    while (j < n)
        result[k++] = b[j++];
}

int main()
{
    int a[] = {9, 7, 5, 3};
    int b[] = {8, 6, 4, 2};
    int n = 4;

    int result[8];

    mergeDescending(a, b, n, result);

    printf("Merged descending array:\n");
    for (int i = 0; i < 2*n; i++)
        printf("%d ", result[i]);

    return 0;
}
