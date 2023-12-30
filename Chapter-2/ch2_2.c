#include <stdio.h>

int main() {
    
    int number, originalNumber, reversedNumber = 0, digit;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

   
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1; 
    }

    
    originalNumber = number;

    
    while (number > 0) {
        digit = number % 10; 
        reversedNumber = reversedNumber * 10 + digit; 
        number /= 10; 
    }

    
    printf("\nOriginal Number: %d\n", originalNumber);
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}