// inclus�o de bibliotecas
#include <stdlib.h>
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int a, b, c, somaAB, subtraiBC, multiplicaCA;
	// comunica��o com o usu�rio e a entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &a);		// entrada de dados
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &b);		// entrada de dados
	printf("\n Digite mais um numero inteiro: ");
	scanf("%d", &c);		// entrada de dados
	// processamento - calcular as opera��es
	somaAB = a + b;
	subtraiBC = b - c;
	multiplicaCA = c * a;
	// limpa tela
	system("cls");
	// sa�da de dados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n\n", somaAB, subtraiBC, multiplicaCA);
	system("pause");
	return 0;
}