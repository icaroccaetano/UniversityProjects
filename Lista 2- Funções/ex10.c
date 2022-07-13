#include <stdio.h>
#include <math.h>

double absoluto (double y) 
{
    if (y<0) {
        y *= -1;
    }
    return y;
}

int next_power (int n, int p)
{
    int i, dif, aux, o, r;
    o = 0;
    for (i=0;;i++)
    {
        aux = pow(i,p);
        if (absoluto(n-aux)<dif) 
        {
            dif = absoluto(n-aux);
            r = i;
        }
        if (aux>n) o++;
        if (o>1) break;
    }
    return r;
}

int main ()
{
    int n, p, r;
    scanf("%d %d", &n, &p);

    r = next_power (n, p);

    printf("%d -> %d^%d = %d\n", n, r, p, (int) pow(r,p));
    return 0;
}