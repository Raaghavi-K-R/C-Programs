/*If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100.*/
#include <stdio.h>
int main(){
    int sum, a,b,c,d,e;
    float percentage;
    printf("Enter the marks obtained by a student in Tamil, English, Maths, Science (Assume that the maximum marks that can be obtained by a student in each subject is 100) : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    printf("Aggregate marks : %d\n",sum);
    percentage = sum/5;
    printf("Percentage marks : %.2f\n",percentage);
    return 0;
}