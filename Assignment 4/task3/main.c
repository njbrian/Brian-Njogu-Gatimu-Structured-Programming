#include <stdio.h>

int main() {
    int n;

    // Step 1: Read number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Print unique elements
    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
