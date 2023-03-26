// inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int contador;
	// repetição - contar de 1 a 1500 de 1 em 1
	for(contador = 1; contador <= 1500; contador = contador + 1)
	{
		printf("\n\t %d", contador);
	}
	
	getch();		// system("pause");	
	return 0;
}