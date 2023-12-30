/* Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/
#include <stdio.h>
int main(){
    printf("Enter the year : ");
    int num;
    scanf("%d",&num);
    if(num%100==0){
        if(num%400==0){
            printf("The given year is a leap year");
        }else{
            printf("The given year is not a leap year");
        }
    }else if(num%4==0){
        printf("The given year is a leap year");
    }else{
        printf("The given year is not a leap year");
    }
    return 0;
}