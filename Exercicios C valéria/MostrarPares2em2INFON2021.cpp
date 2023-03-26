// exercicio 3
// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int cont;
	// loop para mostrar os números pares entre 1 e 100
	for(cont = 2; cont <= 100; cont = cont + 2)
	{
		printf("\t%d", cont);
	}
	printf("\n\n");
	return 0;
}