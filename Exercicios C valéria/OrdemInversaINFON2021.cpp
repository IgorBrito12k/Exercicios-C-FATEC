// inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int a, b, c;
	// comuninca��o com o usu�io e a entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &a);		// entrada de dados
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &b);		// entrada de dados
	printf("\n Digite mais um numero inteiro: ");
	scanf("%d", &c);		// entrada de dados
	
	// limpa tela
	system("cls");
	
	// sa�da de dados de acordo com o exerc�cio - mostrar os dados na ordem inversa a ordem digitada
	printf("\n Ordem digitada: %d %d %d", a, b, c);
	printf("\n Ordem inversa a ordem digitada: %d %d %d \n\n", c, b, a);
	// pausa no processamento para visualizar a execu��o a partir do arquivo execut�vel
	system("pause");
	return 0;
}