// inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
// programa principal
int main()
{
	// declaração e inicialização das variáveis
	int contPar = 0, i, a[1000];
	
	// loop para ler todos os elementos do vetor
	for(i = 0; i < 10; i++)
	{
		printf("\n Digite A[%d] = ", i);
		scanf("%d",&a[i]);
	}
	// loop para percorrer o vetor e contar os elementos pares
	for(i = 0; i < 10; i++)
	{
		if(a[i] % 2 == 0)
		{
			contPar++;
		}
	}
	// limpar a tela
	system("cls");
	// loop para mostrar todos os elementos do vetor, um por um
	printf("\n ******* VETOR A *******\n");
	for(i = 0; i < 10; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n\n\t Existem %d nos. pares no vetor A \n\n", contPar);
	return 0;
}