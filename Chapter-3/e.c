/* A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not.*/

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter a five-digit number : ");
    double k=0;
    int num;
    scanf("%d",&num);
    int copy = num;
    for (int i=0;i<5;i++){
        k = k+((num%10)*pow(10,4-i));
        num = (num-(num%10))/10;
    }
    if (copy==k){
        printf("Original and reversed numbers are equal");
    }else{
        printf("Original and reversed numbers are not equal");
    }
    return 0;
}