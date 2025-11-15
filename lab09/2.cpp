#include <stdio.h>

void deposit(float *balances) {
    int acc;
    float amount;

    printf("\nEnter account number (1-5) to deposit: ");
    scanf("%d", &acc);

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    *(balances + (acc - 1)) += amount;   

    printf("New balance of account %d: %.2f\n", acc, *(balances + (acc - 1)));
}

void withdraw(float *balances) {
    int acc;
    float amount;

    printf("\nEnter account number (1-5) to withdraw: ");
    scanf("%d", &acc);

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= *(balances + (acc - 1))) {
        *(balances + (acc - 1)) -= amount;  // pointer update
        printf("New balance of account %d: %.2f\n", acc, *(balances + (acc - 1)));
    }
    else {
        printf("Insufficient balance.\n");
    }
}

void Average(float *balances) {
    float sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += *(balances + i);   
    }

    printf("\nAverage Balance: %.2f\n", sum / 5);
}

int main() {
    float bal[5];

    printf("Enter initial balances of 5 customers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Customer %d: ", i + 1);
        scanf("%f", (bal + i));  
    }

    deposit(bal);
    withdraw(bal);
    Average(bal);

    return 0;
}

