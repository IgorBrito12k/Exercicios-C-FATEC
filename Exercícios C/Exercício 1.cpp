#include <stdio.h>

int main()

{
	int a, b, c, somaAB, subBC, multCA;
	
	printf("\n digite um número inteiro: ");
	scanf("%d", &a);
	printf("\n digite outro número inteiro: ");
	scanf("%d", &b);
	printf("\n digite mais um número inteiro: ");
	scanf("%d", &c);
	
   somaAB = a + b;
	subBC = b - c;
	multCA = c * a;
	
	printf(" Soma = %d \n Subtração = %d \n Multiplicação = %d \n", somaAB, subBC, multCA);
}

