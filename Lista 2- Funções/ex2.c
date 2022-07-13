#include <stdio.h>

int fibonacci(int t1, int t2, int n) {
    int i, x;
    for (i=3;i<=n;i++) {
        x = t1 + t2;
        t1 = t2;
        t2 = x;
    }   
    return x;    
}


int main () {
    int f1, f2, num;
    scanf("%d %d %d", &f1, &f2, &num);
    
    printf("%d\n", fibonacci(f1, f2, num));

    return 0;
}