#include <stdio.h>

int main() {
    int n, sum = 0;

    // Step 1: Read number of elements
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Step 3: Accumulate sum
    }

    // Step 4: Display the sum
    printf("Sum of all elements stored in the array is : %d\n", sum);

    return 0;
}
