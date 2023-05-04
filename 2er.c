#include <stdio.h>
#include <math.h>

#define MATH_dPI M_PI

int main() {
    float x;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%f", &x);
    if (x == 0) {
        float y = 0;
        float z = 0;
        printf("y(x) = %f\nz(y) = %f\n", y, z);
    }
    else if (-1.0 <= x && x <= 1.0) {
        float y = sqrt(fabs(sin(2*x))) + sqrt(fabs(sin(3*x)));
        float z = pow(log10(tan(y-(MATH_dPI / 8))), 0.25);
        printf("y(x) = %f\nz(y) = %f\n", y, z);
    } 
    else {
        printf("x value is incorrect!\n");
    }
    return 0;
}