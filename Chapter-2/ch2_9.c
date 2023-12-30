#include <stdio.h>

int main() {

    int amount, notes;


    printf("Enter the amount in Rs.: ");
    scanf("%d", &amount);

    printf("\nNumber of notes for each denomination:\n");

    notes = amount / 100;
    printf("Rs. 100 notes: %d\n", notes);
    amount %= 100;

    notes = amount / 50;
    printf("Rs. 50 notes: %d\n", notes);
    amount %= 50;


    notes = amount / 10;
    printf("Rs. 10 notes: %d\n", notes);
    amount %= 10;

    notes = amount / 5;
    printf("Rs. 5 notes: %d\n", notes);
    amount %= 5;


    notes = amount / 2;
    printf("Rs. 2 notes: %d\n", notes);
    amount %= 2;


    notes = amount;
    printf("Re. 1 notes: %d\n", notes);

    return 0;
}
