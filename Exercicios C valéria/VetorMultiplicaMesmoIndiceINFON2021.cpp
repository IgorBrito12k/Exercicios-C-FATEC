// inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
// programa principal
int main()
{
	// declaração da variáveis
	int indice;
	float a[150], b[150], c[150];
	
	// loop para ler todos os elementos do vetor A
	printf("\n Lendo o vetor A \n");
	for(indice = 0; indice < 10; indice++)
	{
		printf("\n Digite A[%d] = ", indice);
		scanf("%f", &a[indice]);
	}
	
	// loop para ler todos os elementos do vetor B
	printf("\n Lendo o vetor B \n");
	for(indice = 0; indice < 10; indice++)
	{
		printf("\n Digite B[%d] = ", indice);
		scanf("%f", &b[indice]);
	}
	
	// loop para calcular o vetor c, elemento por elemento, multiplicando
	// os elementos dos vetores a e b de mesmo índice
	for(indice = 0; indice < 10; indice++)
	{
		c[indice] = a[indice] * b[indice];
	}
	// limpar a tela
	system("cls");
	
	// loop para mostrar todos os elementos dos vetores A, B e C
	printf("\n vetor A \t Vetor B \t Vetor C \n");
	printf(" ---------------------------------------\n");
	for(indice = 0; indice < 10; indice++)
	{
		printf("\n %6.2f \t* %6.2f \t= %6.2f ", a[indice], b[indice], c[indice]);
		printf("\n ---------------------------------------");
	}
	return 0;
}