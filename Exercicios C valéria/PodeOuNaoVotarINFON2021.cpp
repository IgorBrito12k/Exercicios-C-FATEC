// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int anoNasc, anoAtual, idade;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("\n Digite seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	// calcular a idade
	idade = anoAtual - anoNasc;
	printf("\n Idade: %d anos", idade);
	// verificar se a pessoa pode ou n�o votar
	if(idade >= 16)
	{
		printf("\n Voce PODE votar nas proximas eleicoes \n\n");
	}	
	else
	{
		printf("\n Voce NAO PODE votar nas proximas eleicoes \n\n");
	}
	return 0;
}