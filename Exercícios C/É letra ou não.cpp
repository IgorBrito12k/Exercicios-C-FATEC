//Inclus�o de bibliotecas
#include <stdio.h>
#include <conio.h>
//Programa principal
int main()
{
	
	//Declara��o das vari�veis
	char carac;
	//Comunica��o com o us�ario e entrada de dados
	
	printf("\n Digite um caractere: ");
	fflush(stdin);
	scanf("%c", &carac);
	if ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'))
	{
		printf("\n\t %c e uma letra \n\n", carac);
	}
	else
	{
		printf("\n\t %c nao e uma letra \n\n", carac);
	}
	return 0;
}