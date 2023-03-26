#include<stdio.h> 
#include<stdlib.h> 

int main()
{
	
	//Declaração e inicialização das variáveis
	int contPar = 0, i, a[1000];
	
	//loop para ler todos os elementos do vetor
	for(i = 0; i < 1000; i++)
	{
		printf("\n Digite um numero: ");
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 1000; i++)
	{
		if(a[1] % 2 == 0)
		{
			contPar++;
		}
	}
	//limpar tela
	system("cls");
	//loop para mostrar todos os elementos do vetor, um por um
	printf("\n ********* VETOR A ********\n");
	for(i = 0; i < 10; i++)
	{
		printf("&d", a[i]);
	}
	printf("\n\n\t existem %d nos. pares do Vetor A \n\n", contPar);
	return 0;
}