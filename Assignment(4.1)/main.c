#include <stdio.h>

int main() {
    int n;

    // Step 1: Read number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Display stored values
    printf("The values store into the array are : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 4: Display values in reverse
    printf("\nThe values store into the array in reverse are : ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
