// inclus�o de bibliotecas
#include <stdio.h>
#include <conio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	char carac;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite um caracter: ");
	fflush(stdin); 		// limpa o padr�o de entrada de dados para ler um caracter ou string
	carac = getchar();	// scanf("%c",&carac);
	if((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'))
	{
		printf("\n\t %c e uma letra \n\n", carac);
	}
	else
	{
		printf("\n\t %c nao e uma letra \n\n", carac);
	}
	return 0;
}