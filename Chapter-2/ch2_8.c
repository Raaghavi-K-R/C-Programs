#include <stdio.h>

int main() {

    int C, D, temp;


    printf("Enter the value for C: ");
    scanf("%d", &C);

    printf("Enter the value for D: ");
    scanf("%d", &D);

    temp = C;
    C = D;
    D = temp;


    printf("\nAfter interchange:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
