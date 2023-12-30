/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.*/
#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the coordinates of the three points (x1, y1), (x2, y2) and (x3, y3) : ");
    float a,b,c,s;
    float x1,x2,x3,y1,y2,y3;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    a = pow(((pow((x2-x1),2))+(pow((y2-y1),2))),0.5);
    b = pow(((pow((x3-x1),2))+(pow((y3-y1),2))),0.5);
    c = pow(((pow((x2-x3),2))+(pow((y2-y3),2))),0.5);
    
    s = (a+b+c)/2;
    double area = pow((s*(s-a)*(s-b)*(s-c)),0.5);
    if (area==0){
        printf("The three points are collinear");
    }else{
        printf("The three points are not collinear");
    }
    return 0;
}