#include <stdio.h>

//programa��o principal
int main()
{
	//declara��o das constantes
	const float GRAMAS = 1000.00;
	
	//Declara��o de v�riaveis
	float pesoKG, pesoG;
	
	//armazenamento - atribui��o de pesoKG
	pesoKG = 23.5;
	
	//processamento - calcular o pesoG
	pesoG = pesoKG * GRAMAS;
	
	//sa�da de dados - mostrar os resultados
	printf("\n Peso da crian�a em kg: %.2f", pesoKG);
	printf("\n Peso da crian�a em g: %.2f\n\n", pesoG);
	return 0;
}