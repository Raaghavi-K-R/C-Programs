/*Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary*/
#include <stdio.h>
int main(){
    int basic_salary;
    float dearness_allowance, house_rent, gross_salary;
    printf("Enter Ramesh's basic salary :");
    scanf("%d", &basic_salary);
    dearness_allowance = basic_salary * 0.4;
    house_rent = basic_salary * 0.2;
    gross_salary = basic_salary + dearness_allowance + house_rent;
    printf("Gross salary %.2f", gross_salary);
    return 0;
}