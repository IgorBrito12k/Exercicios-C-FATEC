// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das vaiáveis
	float nota1, nota2, peso1, peso2, mediaPoderada;
	// comunicação com usuário e a entrada de dados
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);	// entrada de dados
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);	// entrada de dados
	printf("Digite o peso 1: ");
	scanf("%f", &peso1);	// entrada de dados
	printf("Digite o peso 2: ");
	scanf("%f", &peso2);	// entrada de dados
	// calcular a média ponderada
	mediaPoderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
	// saída de dados
	printf("\n\n Media Ponderada: %.3f \n\n", mediaPoderada);	
	return 0;
}