#include <stdio.h>

int main() {
    double x[5];

    x[0] = 3.4;
    x[1] = 6.9;
    x[2] = 9.9;
    x[3] = 5.0;
    x[4] = 2.1;

    printf("\nx[0] = %lf", x[0]);
    printf("\nx[1] = %lf", x[1]);
    printf("\nx[2] = %lf", x[2]);
    printf("\nx[3] = %lf", x[3]);
    printf("\nx[4] = %lf", x[4]);

    return 0;
}