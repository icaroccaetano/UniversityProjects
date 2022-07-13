#include <stdio.h>

double compute_pi (int n) {
    double pi, num, den; 
    int i;    

    pi = 1.00;
    num = 2.00;
    den = 1.00;
    
    for (i=1;i<=n;i++) {
        
        if (num>den) {
            pi *= (num/den);
            den += 2.00;            
        }
        else {
            pi *= (num/den);
            num += 2.00;           
        }
    }
    pi *= 2.00;
    return pi;
}


int main () {
    int t;
    double resp;

    scanf("%d", &t);

    resp = compute_pi (t);

    printf("%.12lf\n", resp);

    return 0;
}