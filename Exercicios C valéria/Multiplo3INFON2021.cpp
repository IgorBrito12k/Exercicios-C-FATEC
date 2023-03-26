// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int num, resto;
	// comunicação com usuário e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	// calcular o resto da divisão no número por 3
	resto = num % 3; 	// % é o operador mod
	// verificar se número é múltiplo de 3
	if(resto == 0)
	{
		printf("\n %d e multiplo de 3", num);
	}	
	// mostrar a mensagem
	printf("\n Precisamos de chuva urgentemente\n\n");
	return 0;
}