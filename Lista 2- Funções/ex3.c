#include <stdio.h>

void separaDigitos (int x, int * c, int * d, int * u) {
    * c = x/100;
    * d = x%100/10;
    * u = x%10/1;
    return;
}
int main () {
    int num, c, d, u;
    scanf("%d", &num);

    separaDigitos (num, &c, &d, &u);

    printf ("%d%d%d\n", u, d, c);
    return 0;
}