#include <stdio.h>

int main()

{
	int a, b, c, somaAB, subBC, multCA;
	
	printf("\n digite um n�mero inteiro: ");
	scanf("%d", &a);
	printf("\n digite outro n�mero inteiro: ");
	scanf("%d", &b);
	printf("\n digite mais um n�mero inteiro: ");
	scanf("%d", &c);
	
   somaAB = a + b;
	subBC = b - c;
	multCA = c * a;
	
	printf(" Soma = %d \n Subtra��o = %d \n Multiplica��o = %d \n", somaAB, subBC, multCA);
}

