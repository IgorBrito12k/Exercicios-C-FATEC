// SOLU��O 1
// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int codigDepto;
	float preco, precoNovo;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite o preco do produto R$ ");
	scanf("%f", &preco);
	printf("\n Digite o codigo do departamento: ");
	scanf("%d", &codigDepto);
	// escolher qual aumento aplicar - calcular o pre�o novo
	if(codigDepto == 1)
	{
		precoNovo = preco + preco * 0.05;
	}
	else
	{
		precoNovo = preco + preco * 0.074;
	}
	printf("\n Preco R$ %.2f \n Preco com aumento R$ %.2f \n\n", preco, precoNovo);	
	return 0;
}