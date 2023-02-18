#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    printf("Enter x { -1.0 <= x <= 1.0 } -> ");
    scanf("%f", &x);
    if (-1.0 <= x && x <= 1.0)
    {
        float y = sqrt(sin(2*x)) + sqrt(sin(3*x));
        float z = pow( log(tan(y-3.14/8)),1/4);
        printf("y(x) = %f\nz(y) = %f\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}