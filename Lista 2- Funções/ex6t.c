#include <stdio.h>

double absoluto (double y) 
{
    if (y<0) y *= -1;
    return y;
}

double mySqrt (double n) 
{
    double x1, x2;
    x1=1;
    x2=((x1+(n/x1))/2);   
    return x2;
}

int main()
{
    double n, r, x1, x2, w, dif, e;
    scanf("%lf",&n);
    scanf("%lf",&e);

    dif = e+1;
    x2 = mySqrt(n);
    
    while (dif>e)
    {
        x1 = x2;
        x2=((x1+(n/x1))/2);
        w=x2-x1;
        dif = absoluto(n - (absoluto(x1*x1)));
        printf("r: %.9lf, ", x1);
        printf("err: %.9lf\n", dif);
    }
    return 0;
}