// inclus�o de bibliotecas
#include <stdio.h>

// implementa��o do programa pricipal
int main()
{
	// declara��o das vari�veis
	int a, b, c, somaAB, subtraiCA, multiplicaBC, somaDivisaoACB;
	
	// armazenamento - operador de atribui��o
	a = 9;
	b = 17; 
	c = -6;
	
	// processamento - c�lculos - operadores aritim�ticos
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	
	// saida de dados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n Soma e Divisao = %d \n\n", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
	return 0;
}