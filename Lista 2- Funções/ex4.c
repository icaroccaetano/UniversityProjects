#include <stdio.h>

int somaDivisores (int x) {
    int i, som;
    som = 1;
    printf("1 ");
    for(i=2;i<x;i++) {
        if (x%i==0) {
            som += i;                    
            printf("+ %d ", i);
        }
    }
   return som;
}

int main () {
    int num, soma;
    scanf("%d", &num);
    if (num<1) {return 0;}
    
    printf("%d = ", num);
    
    soma = somaDivisores(num);
    printf("= %d", soma);


    if (soma==num) {printf(" (NUMERO PERFEITO)\n");} 
    else {printf(" (NUMERO NAO E PERFEITO)\n");}

    return 0;
}
