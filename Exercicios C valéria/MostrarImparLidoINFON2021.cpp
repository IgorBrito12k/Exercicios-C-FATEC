// exercício 5
// inclusão de bibliteca
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int contador, num;
	// repetição para contar de 1 a 100 de 1 em 1
	for(contador = 1; contador <= 100; contador = contador + 1)
	{
		// comunicação com usuário e entrada de dados
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num);
		// verificar se número digitado é ímpar
		if(num % 2 != 0)
		{
			printf("\n\t%d e impar\n", num);
		}
	}
	return 0;
}