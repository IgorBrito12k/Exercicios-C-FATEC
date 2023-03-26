// inclusão de bibliotecas
#include <stdlib.h>
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int a, b, c, somaAB, subtraiBC, multiplicaCA;
	// comunicação com o usuário e a entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &a);		// entrada de dados
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &b);		// entrada de dados
	printf("\n Digite mais um numero inteiro: ");
	scanf("%d", &c);		// entrada de dados
	// processamento - calcular as operações
	somaAB = a + b;
	subtraiBC = b - c;
	multiplicaCA = c * a;
	// limpa tela
	system("cls");
	// saída de dados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n\n", somaAB, subtraiBC, multiplicaCA);
	system("pause");
	return 0;
}