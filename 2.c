#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%lf", &x);
    if (-1.0 <= x && x <= 1.0)
    {
        double  y= log((1+x)/(1-x));
        double  z=(y*y)/(1-y);
        printf("y(x) = %lf, z(y) = %lf\n", y, z);
    }
    else
        printf("Value (x) is wrong!\n");
    return 0;
}