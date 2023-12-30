/*If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’)*/
#include <stdio.h>
int main(){
    int num,digit,sum = 0;
    printf("Enter five-digit number: ");
    scanf("%d", &num);
    while(num>0){
        digit = num%10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of its digits: %d\n", sum);

    return 0;
}
