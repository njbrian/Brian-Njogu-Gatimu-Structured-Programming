#include <stdio.h>

int main() {
    int size, pos, value;

    // Step 1: Read initial array size
    printf("Input the size of array: ");
    scanf("%d", &size);

    int arr[size + 1]; // +1 to accommodate the new element

    // Step 2: Read array elements
    printf("Input %d elements in the array in ascending order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Read value and position to insert
    printf("Input the value to be inserted: ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);

    // Step 4: Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Insert the value
    arr[pos] = value;
    size++; // Update size

    // Step 6: Display original and updated array
    printf("After Insert the element the new list is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
