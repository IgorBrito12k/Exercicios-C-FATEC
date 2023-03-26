// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int num1, num2;
	// comunicação com usuário e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num1);
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &num2);
	// verificar os numeros para mostrar em ordem crescente
	if(num1 < num2)
	{
		printf("\n\t Ordem crescente: %d %d \n\n", num1, num2);
	}
	else
	{
		printf("\n\t Ordem crescente: %d %d \n\n", num2, num1);
	}
	return 0;
}