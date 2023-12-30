#include <stdio.h>
#include <math.h>

int main() {

    double t, v, wcf;


    printf("Enter the temperature in degrees Celsius: ");
    scanf("%lf", &t);

    printf("Enter the wind velocity in meters per second: ");
    scanf("%lf", &v);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);


    printf("\nWind Chill Factor: %.2f degrees Celsius\n", wcf);

    return 0;
}
