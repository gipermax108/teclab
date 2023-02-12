#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%lf", &x);
    if (-1.0 <= x && x <= 1.0)
    {
        double y = x * sqrt (1.0 + x * x) + asin(x);
        double z = exp(y) * sqrt(1.0 + exp(2.0 * y));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}