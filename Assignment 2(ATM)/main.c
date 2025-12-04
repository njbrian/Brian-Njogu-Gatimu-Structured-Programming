#include <stdio.h>
#include <stdlib.h>


int login();
void showMenu();
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main() {
    int balance;
    int pinSuccess = login();

    if (!pinSuccess) {
        printf("Too many failed attempts. Exiting...\n");
        return 1;
    }

    int choice;
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}


int login() {
    int pin, attempts = 0;
    const int correctPin = 8245;

    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Login successful!\n");
            return 1;
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }

    return 0;
}


void showMenu() {
    printf("\n***%%== NJ ATM MENU ***%%==\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}


void checkBalance(int balance) {
    printf("Your current balance is: KES %d\n", balance);
}


int deposit(int balance) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid deposit amount.\n");
    } else {
        balance += amount;
        printf("KES %d deposited successfully.\n", amount);
    }

    return balance;
}


int withdraw(int balance) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid withdrawal amount.\n");
    } else if (amount > balance) {
        printf("Insufficient balance. Transaction failed.\n");
    } else {
        balance -= amount;
        printf("KES %d withdrawn successfully.\n", amount);
    }

    return balance;
}
