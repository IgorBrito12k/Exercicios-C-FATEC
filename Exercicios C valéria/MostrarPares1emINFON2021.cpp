// exercicio 4
// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int cont;
	// loop para mostrar os números pares entre 1 e 100
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