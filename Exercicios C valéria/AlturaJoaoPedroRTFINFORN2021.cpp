// inclusão de bibliotecas
#include <stdio.h>
//programa principal
int main()
{
	// declarar e inicializar as variáveis
	float alturaJoao = 1.40, alturaPedro = 1.25;
	int anos = 0;
	// loop para atualizar as alturas
	do
	{
		alturaJoao  = alturaJoao  + 0.03;
		alturaPedro = alturaPedro + 0.05;
		anos++;
	} while(alturaJoao >= alturaPedro);
	// saída de resultados
	printf("\n\n\t Serao necessarios %d anos para Pedro ficar mais alto que Joao \n\n", anos);
	return 0;
}