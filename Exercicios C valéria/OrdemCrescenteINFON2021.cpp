// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int num1, num2;
	// comunica��o com usu�rio e entrada de dados
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