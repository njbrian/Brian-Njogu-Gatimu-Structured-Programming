#include <stdio.h>

int main() {
    int n;

    // Step 1: Read number of elements
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize max and min
    int max = arr[0], min = arr[0];

    // Step 4: Traverse to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // Step 5: Display results
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
