// exercicio 4
// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int cont;
	// loop para mostrar os n�meros pares entre 1 e 100
	for(cont = 1; cont <= 100; cont = cont + 1)
	{
		if(cont % 2 == 0)
		{
			printf("\t%d", cont);
		}
	}
	printf("\n\n");
	return 0;
}