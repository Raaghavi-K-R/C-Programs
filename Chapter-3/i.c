/*Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter.*/

#include <stdio.h>
int main(){
    float l,b;
    printf("Input the length of the Rectangle: ");
    scanf("%f",&l);
    printf("Input the breadth of the Rectangle: ");
    scanf("%f",&b);
    float rar = l*b;
    float rpr = 2*(l+b);
    if(rar>rpr){
        printf("area is greater than perimeter");
    }else{
        printf("area is less than perimeter");
    }
    return 0;
}