// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	float altura, pesoIdeal;
	char sexo;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite sua altura em metros: ");
	scanf("%f", &altura);
	printf("\n Digite seu sexo F - Feminino ou M - Masculino: ");
	fflush(stdin);
	scanf("%c", &sexo);
	// calcular o peso ideal aplicando a f�rmula de acordo com o sexo da pessoa
	if(sexo == 'f' || sexo == 'F')
	{
		pesoIdeal = 62.1 * altura - 44.7;
	}
	else
	{
		pesoIdeal = 72.7 * altura - 58.0;
	}
	printf("\n\n Peso Ideal: %.2f kg \n\n", pesoIdeal);
	return 0;
}