#include <stdio.h>
#include <math.h>
int main()
{
    double x,f,h,s;
    int i=0;
    x=0;
    printf("Vvedite shag 0<h<=3 \n");
    scanf("%lf",&h);
    s=2.00/h;
    if (h>0 && h<=3)
    {
    printf("\tx\tf(x)\n");
    printf("-----------------------\n");
    while(i<=s)
    {
        x=i*h;
        if(x>=0.00 && x<=1.50)
        
            f=pow(2, x) - 2 + pow(x, 2);
        
        else
        
            f=sqrt(x) * exp(-pow(x, 2));
        
        printf("%lf\t%lf\n",x,f);
        i++;
    }
    }
    else 
    {
        printf("incorect h"); 
    }
    return 0;
}