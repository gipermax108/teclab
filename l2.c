#include <stdio.h>
#include <math.h>
#define M_PI
int main()
{
    float x;
    double M_PI;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%f", &x);
    if (-1.0 <= x && x <= 1.0)
    {
        float y = pow(sin(2*x),2) + pow(sin(3*x),2);
        float z = pow(log(tan(y-M_PI / 8)),0.25);
        printf("y(x) = %f\nz(y) = %f\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}