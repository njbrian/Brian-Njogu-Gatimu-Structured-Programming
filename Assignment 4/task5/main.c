#include <stdio.h>

int main() {
    int n;

    // Step 1: Read array size
    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read array elements
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Sort array in ascending order (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 4: Display sorted array
    printf("Elements of array in sorted ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
