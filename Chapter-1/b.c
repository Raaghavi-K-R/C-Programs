/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters*/
#include <stdio.h>
int main(){
    float km, m, ft, in, cm;
    printf("Enter distance between two cities (in km.) : ");
    scanf("%f", &km);
    m = km * 1000;
    printf("Distance between two cities (in meters) : %.2f\n", m);
    ft = km * 1000 * 3.28084;
    printf("Distance between two cities (in feet) : %.2f\n", ft);
    in = km * 1000 * 3.28084 * 12;
    printf("Distance between two cities (in inches) : %.2f\n", in);
    cm = km * 1000 * 100;
    printf("Distance between two cities (in centimeters) : %.2f\n", cm);
    return 0;
}