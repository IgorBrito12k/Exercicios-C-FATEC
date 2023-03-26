// inclusa� de bibliotecas
#include <stdio.h>
#include <conio.h>

// programa principal
int main()
{
	// declara��o e inicializa��o das vari�veis
	int idade, somaIdade = 0, mediaIdade = 0, contPessoas = 0, idadeMaisVelho = 0;
	char resp;
	
	// loop para realizar a pesquisa
	do
	{
		// comunica��o com usu�rio e entrada de dados
		printf("\n Digite sua idade: ");
		scanf("%d", &idade);
		somaIdade = somaIdade + idade;
		contPessoas++;
		if(idade > idadeMaisVelho)
		{
			idadeMaisVelho = idade;
		}
		printf(" Deseja continuar a pesquisa S/N: ");
		resp = getche();
	} while(resp == 's' || resp == 'S');
	// calcular a m�dia de idade
	mediaIdade = somaIdade / contPessoas;
	// sa�da de dados
	printf("\n\n\t Media de idade dos alunos da Fatec: %d anos\n", mediaIdade);
	printf("\t Idade do aluno mais velho da Fatec: %d anos\n\n", idadeMaisVelho);

		
	return 0;
}