#include <stdio.h>

void converteEmNotasMoedas (int x, int * cem, int * cin, int * dez, int * um) {
    * cem = x/100;
    * cin = x%100/50;
    * dez = x%100%50/10;
    * um = x%100%50%10;
    return;
}

int main () {
    int val, cem, cin, dez, um;

    scanf("%d", &val);

    converteEmNotasMoedas(val, &cem, &cin, &dez, &um);

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", cem, cin, dez, um);


    return 0;
}