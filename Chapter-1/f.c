/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
shorter sides. Thus paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8.*/
#include <stdio.h>
int main(){
    int length = 1189;
    int width = 841;
    printf("Paper of size A0 has dimensions %d mm x %d mm\n",length,width);
    for(int i=1; i<=8; i++){
        int nl = width;
        int nw = length/2;
        length = nl;
        width = nw;
        printf("Paper of size A%d has dimensions %d mm x %d mm\n",i,nl,nw);
    }
    return 0;
}