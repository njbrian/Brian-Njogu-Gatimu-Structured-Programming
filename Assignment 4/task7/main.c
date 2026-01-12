#include <stdio.h>
#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;     // Points to the next write position
int count = 0;    // Number of valid samples in buffer

// Insert a new sample into the buffer
void insert_sample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

// Print samples in chronological order (oldest → newest)
void print_samples() {
    printf("Stored samples (oldest → newest): ");
    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    for (int i = 0; i < count; i++) {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int value;
    char choice;

    printf("Circular Data Logger (Buffer size = %d)\n", BUFFER_SIZE);

    do {
        printf("Enter new sensor value: ");
        scanf("%d", &value);

        insert_sample(value);
        print_samples();

        printf("Continue logging? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
