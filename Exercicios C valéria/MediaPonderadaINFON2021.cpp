// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	float nota1, nota2, peso1, peso2, mediaPonderada;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite a nota 1: ");
	scanf("%f", &nota1);	// entrada de dados
	printf("\n Digite a nota 2: ");
	scanf("%f", &nota2);	// entrada de dados
	printf("\n Digite o peso 1: ");
	scanf("%f", &peso1);	// entrada de dados
	printf("\n Digite o peso 2: ");
	scanf("%f", &peso2);	// entrada de dados
	// calcular a m�dia ponderada
	mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
	// sa�da de dados
	printf("\n\n Media Ponderada: %.3f \n\n", mediaPonderada);
	return 0;
}