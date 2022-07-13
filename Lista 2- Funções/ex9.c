#include <stdio.h>

void inverte (int * x) 
{
    int c, d, u;
    int aux;
    c = *x/100;
    d = *x%100/10;
    u = *x%10/1;
    aux = c;
    c = u;
    u = c;
    u = aux; 
    * x = (100*c)+(10*d)+u; 
    return;
}

int main () 
{
    int t;
    int a, b;

    scanf("%d", &t);
    for (;t>0;t--)
    {
        scanf("%d %d", &a, &b);
        inverte(&a);
        inverte(&b);

        if (a>b) printf("%d", a);
        else printf("%d", b);
        printf("\n");
    }
    return 0;
}