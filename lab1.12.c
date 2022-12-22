#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,k,g;
    printf("Enter Pervoe Chislo =");
    scanf("%f",&a);
    printf("\nEnter Vtoroe Chislo =");
    scanf("%f",&b);
     printf("\nEnter Tretie Chislo =");
    scanf("%f",&c);
    k=a+b+c;
    if(k > 0)
    {
        if (a<b && a<c)
        {
            g=1/k;
            printf("\nChastnoe = %f",g);
        }
        else if (b<a && b<c)
        {
            g=2/k;
            printf("\nChastnoe = %f",g);
        }
        else if (c<a&&c<b)
        {
            g=3/k;
            printf("\nChastnoe = %f",g);
        }
    }
    else if (k<0)
    {
        if (a<b && a<c)
        {
            g=1/(1/k);
            printf("\nChastnoe = %f",g);
        }
        else if (b<a && b<c)
        {
            g=1/(2/k);
            printf("\nChastnoe = %f",g);
        }
        else if (c<a&&c<b)
        {
            g=1/(3/k);
            printf("\nChastnoe = %f",g);
        }
    }
    else 
    {
        printf("\nDelitel` ne mojet bit = 0!\n");
    }  
    return 0;
}