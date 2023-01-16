#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%lf", &x);
    if (-1.0 <= x && x <= 1.0)
    {
        double  y= sqrt(sin(2*x))+sqrt(sin(3*x));
        double  z=pow(log(tan( y - (M_PI / 8) ) ),1/4);
        printf("y(x) = %lf, z(y) = %lf\n", y, z);
    }
    else
        printf("Value (x) is wrong!\n");
    return 0;
}