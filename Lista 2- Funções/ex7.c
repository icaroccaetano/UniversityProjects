#include <stdio.h>

void print_bits (unsigned char * p_byte)
{
    unsigned char B = *p_byte;
    int i;
    int peso = 128;
    for(i=0;i<B;i++)
    {
        printf("%d", B/peso);
        B = B%peso;
        peso /= 2;
    }
}

void print_bytes (const void * end_byte, int n)
{
    int i; 
    char * p = (char *) end_byte;

    for (i=0;i<n;i++)
    {
        print_bits (p);
        printf(" ");
        p++;
    }
    printf("\n");
}

int main ()
{
    double n;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float ft;

    scanf("%lf", &n);
    uc = n;
    us = n;
    ui = n;
    ft = n;

    print_bytes (&uc,1);
    print_bytes (&us,2);
    print_bytes (&ui,4);
    print_bytes (&ft,4);
    print_bytes (&n,8);

    return 0;
}
