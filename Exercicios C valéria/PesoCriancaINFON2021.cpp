// inclus�o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
// programa principal
int main()
{
	// declara��o das constantes
	const float GRAMAS = 1000.00;	
	
	// declara��o das vari�veis
	float pesoKG, pesoG;
	
	// armazenamento - atribui��o do pesoKG
	pesoKG = 23.5;
	
	// processamento - calcular o pesoG
	pesoG = pesoKG * GRAMAS;
	
	// sa�da de dados - mostrar os resultados
	printf("\n Peso da crianca em kg: %.2f", pesoKG);
	printf("\n Peso da crianca em  g: %.2f \n\n", pesoG);
	system("pause");
	return 0;
}