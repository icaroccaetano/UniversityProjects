#include <stdio.h>
#include <math.h>

void Eq2Grau (double a, double b, double c) {
    double delta, r1, r2;
    int x;
    
    if (a==0) {
        printf("DIVISAO POR ZERO\n");
        return;
    }
    
    delta = (b*b) - (4*a*c);
    
    if (delta < 0) {
            printf("RAIZES IMAGINARIAS\n");
            return;
    }
    if (delta == 0) {
            printf("RAIZ UNICA\n");
            r1 = (-b)/(2*a);
            printf("X1 = %.2lf\n", r1);
            return;
    }
    if (delta > 0) {
            printf("RAIZES DISTINTAS\n");
            r1 = (-b + sqrt(delta))/(2*a);
            r2 = (-b - sqrt(delta))/(2*a);
            if (r2>r1)
                printf("X1 = %.2lf\nX2 = %.2f\n", r1, r2);
            else 
                printf("X1 = %.2lf\nX2 = %.2f\n", r2, r1);
            return;
    }       
    return;
}


int main () {
    double a, b ,c;

    scanf ("%lf %lf %lf", &a, &b, &c);

    Eq2Grau (a, b, c);

    return 0;
}