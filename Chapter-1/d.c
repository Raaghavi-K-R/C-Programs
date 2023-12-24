/*Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees*/
#include <stdio.h>
int main(){
    float Fahrenheit, Centigrade;
    printf("Enter temperature of a city in Fahrenheit degrees : ");
    scanf("%f", &Fahrenheit);
    Centigrade = (0.5/0.9)*(Fahrenheit - 32);
    printf("Temperature of a city in Centigrade degrees : %.2f", Centigrade);
    return 0;
}