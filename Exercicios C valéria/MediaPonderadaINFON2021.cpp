// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	float nota1, nota2, peso1, peso2, mediaPonderada;
	// comunicação com usuário e entrada de dados
	printf("\n Digite a nota 1: ");
	scanf("%f", &nota1);	// entrada de dados
	printf("\n Digite a nota 2: ");
	scanf("%f", &nota2);	// entrada de dados
	printf("\n Digite o peso 1: ");
	scanf("%f", &peso1);	// entrada de dados
	printf("\n Digite o peso 2: ");
	scanf("%f", &peso2);	// entrada de dados
	// calcular a média ponderada
	mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
	// saída de dados
	printf("\n\n Media Ponderada: %.3f \n\n", mediaPonderada);
	return 0;
}