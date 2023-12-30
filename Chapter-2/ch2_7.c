#include <stdio.h>
#include <math.h>

int main() {

    double angleInDegrees, angleInRadians;


    printf("Enter the angle in degrees: ");
    scanf("%lf", &angleInDegrees);


    angleInRadians = angleInDegrees * M_PI / 180;


    double sinValue = sin(angleInRadians);
    double cosValue = cos(angleInRadians);
    double tanValue = tan(angleInRadians);
    double cosecValue = 1 / sinValue;
    double secValue = 1 / cosValue;
    double cotValue = 1 / tanValue;


    printf("\nTrigonometric Ratios for %.2f degrees:\n", angleInDegrees);
    printf("Sin: %.4f\n", sinValue);
    printf("Cos: %.4f\n", cosValue);
    printf("Tan: %.4f\n", tanValue);


    if (sinValue != 0) {
        printf("Cosec: %.4f\n", cosecValue);
    } else {
        printf("Cosec: Undefined (division by zero)\n");
    }

    if (cosValue != 0) {
        printf("Sec: %.4f\n", secValue);
    } else {
        printf("Sec: Undefined (division by zero)\n");
    }

    if (tanValue != 0) {
        printf("Cot: %.4f\n", cotValue);
    } else {
        printf("Cot: Undefined (division by zero)\n");
    }

    return 0;
}
