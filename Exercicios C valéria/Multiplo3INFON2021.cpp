// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int num, resto;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	// calcular o resto da divis�o no n�mero por 3
	resto = num % 3; 	// % � o operador mod
	// verificar se n�mero � m�ltiplo de 3
	if(resto == 0)
	{
		printf("\n %d e multiplo de 3", num);
	}	
	// mostrar a mensagem
	printf("\n Precisamos de chuva urgentemente\n\n");
	return 0;
}