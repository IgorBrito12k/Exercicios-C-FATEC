// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int anoNasc, anoAtual, idade;
	// comunicação com usuário e entrada de dados
	printf("\n Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("\n Digite seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	// calcular a idade
	idade = anoAtual - anoNasc;
	printf("\n Idade: %d anos", idade);
	// verificar se a pessoa pode ou não votar
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