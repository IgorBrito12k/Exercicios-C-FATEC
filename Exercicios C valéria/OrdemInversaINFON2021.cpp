// inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
// programa principal
int main()
{
	// declaração das variáveis
	int a, b, c;
	// comunincação com o usuáio e a entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &a);		// entrada de dados
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &b);		// entrada de dados
	printf("\n Digite mais um numero inteiro: ");
	scanf("%d", &c);		// entrada de dados
	
	// limpa tela
	system("cls");
	
	// saída de dados de acordo com o exercício - mostrar os dados na ordem inversa a ordem digitada
	printf("\n Ordem digitada: %d %d %d", a, b, c);
	printf("\n Ordem inversa a ordem digitada: %d %d %d \n\n", c, b, a);
	// pausa no processamento para visualizar a execução a partir do arquivo executável
	system("pause");
	return 0;
}