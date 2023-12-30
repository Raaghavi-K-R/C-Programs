/*Write a program to find the absolute value of a number entered 
through the keyboard*/

#include <stdio.h>
int main(){
    printf("Enter the elements : ");
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("Absolute value is %d",a-b);
    }else{
        printf("Absolute value is %d",b-a);
    }
    return 0;
}