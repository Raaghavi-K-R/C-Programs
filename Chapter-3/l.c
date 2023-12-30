/*Given a point (x, y), write a program to find out if it 
lies on the X-axis, Y-axis or on the origin*/

#include<stdio.h>
int main(){
    printf("Give the coordinates (x, y) of the point : ");
    float x,y;
    scanf("%f %f",&x,&y);
    if (x==0){
        if(y==0){
            printf("The point is origin");
        }else{
            printf("point lies on y-axis");
        }
    }else if (y==0){
        printf("point lies on x-axis");
    }else{
        printf("point lies on the plane but not on any axs");
    }
    return 0;
}