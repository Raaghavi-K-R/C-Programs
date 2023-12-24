/*The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle*/
#include <stdio.h>
int main(){
    float l,b,r,area,peri,ar,cir;
    printf("Enter length and breadth of a rectangle and radius of a circle : \n");
    scanf("%f%f%f",&l,&b,&r);
    area = l*b;
    peri = 2 * (l + b);
    printf("Area and  Perimeter of rectange is %.2f and %.2f\n",area,peri);
    ar = 3.14 * r * r;
    cir = 2 * 3.14 * r;
    printf("Area and  Circumference of circle is %.2f and %.2f\n",ar,cir);
    return 0;
}