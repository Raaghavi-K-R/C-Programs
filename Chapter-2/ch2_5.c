#include <stdio.h>
#include <math.h>

#define EARTH_RADIUS 3963

int main() {

    double L1, L2, G1, G2, D;


    printf("Enter Latitude of Place 1 in degrees: ");
    scanf("%lf", &L1);

    printf("Enter Longitude of Place 1 in degrees: ");
    scanf("%lf", &G1);

    printf("Enter Latitude of Place 2 in degrees: ");
    scanf("%lf", &L2);

    printf("Enter Longitude of Place 2 in degrees: ");
    scanf("%lf", &G2);

    L1 = L1 * M_PI / 180;
    G1 = G1 * M_PI / 180;
    L2 = L2 * M_PI / 180;
    G2 = G2 * M_PI / 180;

    D = EARTH_RADIUS * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));


    printf("\nDistance between Place 1 and Place 2: %.2f nautical miles\n", D);

    return 0;
}
