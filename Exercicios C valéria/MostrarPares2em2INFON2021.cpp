// exercicio 3
// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int cont;
	// loop para mostrar os n�meros pares entre 1 e 100
	for(cont = 2; cont <= 100; cont = cont + 2)
	{
		printf("\t%d", cont);
	}
	printf("\n\n");
	return 0;
}