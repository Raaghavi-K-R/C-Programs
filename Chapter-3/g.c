/*Write a program to check whether a triangle is valid or not, when 
the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 
degrees*/
#include <stdio.h>
int main(){
    printf("Enter the three angles of the triangle : ");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b+c==180){
        printf("Valid Triangle");
    }else{
        printf("Invalid triangle");
    }
    return 0;
}