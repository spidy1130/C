#include <stdio.h>
void readAndDisplayReverse(int n) {
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);
    readAndDisplayReverse(numElements);

    return 0;
}