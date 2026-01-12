#include <stdio.h>

int main() {
    int arr[6][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
        {40, 41, 42, 43},
        {50, 51, 52, 53},
        {60, 61, 62, 63}
    };

    // Step 1: Traverse and print each element
    printf("Traversing 6x4 array:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element at [%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
