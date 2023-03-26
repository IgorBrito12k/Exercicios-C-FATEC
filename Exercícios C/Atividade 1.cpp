#include <stdio.h>
main()
{
	int a, b ,c, somaAB, multiplicaBC, subtraiCA, somaDivisaoACB;
			
	a=9;
	b=17;
	c=-6;
	
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	 
	printf(" Soma = %d \n Subtração = %d \n Multiplicação = %d \n Soma e Divisão = %d \n", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
}