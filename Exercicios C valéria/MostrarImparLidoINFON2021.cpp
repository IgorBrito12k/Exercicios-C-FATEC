// exerc�cio 5
// inclus�o de bibliteca
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int contador, num;
	// repeti��o para contar de 1 a 100 de 1 em 1
	for(contador = 1; contador <= 100; contador = contador + 1)
	{
		// comunica��o com usu�rio e entrada de dados
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num);
		// verificar se n�mero digitado � �mpar
		if(num % 2 != 0)
		{
			printf("\n\t%d e impar\n", num);
		}
	}
	return 0;
}