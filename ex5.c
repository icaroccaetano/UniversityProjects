#include <stdio.h>

int main () { 

	float a;
	float b;
	float c;
	float d;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	
	float m = a*d-b*c;

	printf("O VALOR DO DETERMINANTE E = %.2f\n", m);
	
	return 0;
}
