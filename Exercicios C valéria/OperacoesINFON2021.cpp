// inclusão de bibliotecas
#include <stdio.h>

// implementação do programa pricipal
int main()
{
	// declaração das variáveis
	int a, b, c, somaAB, subtraiCA, multiplicaBC, somaDivisaoACB;
	
	// armazenamento - operador de atribuição
	a = 9;
	b = 17; 
	c = -6;
	
	// processamento - cálculos - operadores aritiméticos
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	
	// saida de dados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n Soma e Divisao = %d \n\n", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
	return 0;
}