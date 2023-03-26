#include <stdio.h>

//programação principal
int main()
{
	//declaração das constantes
	const float GRAMAS = 1000.00;
	
	//Declaração de váriaveis
	float pesoKG, pesoG;
	
	//armazenamento - atribuição de pesoKG
	pesoKG = 23.5;
	
	//processamento - calcular o pesoG
	pesoG = pesoKG * GRAMAS;
	
	//saída de dados - mostrar os resultados
	printf("\n Peso da criança em kg: %.2f", pesoKG);
	printf("\n Peso da criança em g: %.2f\n\n", pesoG);
	return 0;
}