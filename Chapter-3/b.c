/* Any integer is input through the keyboard. Write a program to find 
out whether it is an odd number or even number.*/
#include <stdio.h>
int main(){
    printf("Enter a number :");
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is even");
    }else {
        printf("Number id odd");
    };
    return 0;
}