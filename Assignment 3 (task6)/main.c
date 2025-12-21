#include <stdio.h>

void incrementValue(int x) {
    x++;
}

void incrementReference(int *x) {
    (*x)++;
}

int main() {
    int num = 10;

    incrementValue(num);
    printf("After pass by value: %d\n", num);

    incrementReference(&num);
    printf("After pass by reference: %d\n", num);

    return 0;
}
