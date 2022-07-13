#include <stdio.h>

double absoluto (double y) {
    if (y<0) {
        y *= -1;
    }
    return y;
}

double raiz (double x) {
    int an, d, i;
    for (an=0;;an++) {
        if ((an*an)>=x) {
            an -= 1;
            break;
        }
    }
    for (d=an;;d++) {
        if ((d*d)>=x) {
            break;
        }
    }

    
    return x;
}

int main () {
    double n, e, te, a[100], b[100], ak, bk;
    int an, d;
    scanf("%lf", &n);
    scanf("%lf", &e);

    a[0] = (an+d)/2;
    b[0] = n/a[0];

    ak = (a[0] + b[0])/2;
    bk = n/ak;

    if (absoluto)
    

    while (1) {

    }
    printf("entre %d e %d", a, d);
    
    return 0;
}



