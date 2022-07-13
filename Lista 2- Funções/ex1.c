#include <stdio.h>

unsigned long int fat(unsigned long int x) {
    int i;
    for (i=x-1;i>0;i--) 
        x *= i;
    if (x==0) {x=1;}
    return x;
}

int main () {
    int n, a;
    scanf("%d", &n);
    
    a = fat(n);

    printf("%d! = %d\n", n, a);

    
    return 0;

}
