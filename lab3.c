# include
# math.h
int main(){
    double h, f,x;
    printf("Enter h(0<=h&&h)\n");
    scanf("%lf",&h);
    if (h==0)
    {
        printf("invalid\n");
        return 0;
    }
    printf("h         f(x)\n");
    printf("-----------------\n");
    unsigned int a=2/h;
    int i=0;
    do{
        double x=i*h;
        if(x>=0&&x<=1)
        f=B*pow(x,3)*cos(x);
        else
        f=log(1+sqrt(x))-cos(x);
        printf("%lf  %lf\n", x, f);
        i++;
    }while(i<=a);
    return 0;
}