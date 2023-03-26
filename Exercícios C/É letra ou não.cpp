//Inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>
//Programa principal
int main()
{
	
	//Declaração das variáveis
	char carac;
	//Comunicação com o usúario e entrada de dados
	
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