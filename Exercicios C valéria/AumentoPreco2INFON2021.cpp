// SOLU��O 2
// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int codigDepto;
	float preco, precoNovo, aumento;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite o preco do produto R$ ");
	scanf("%f", &preco);
	printf("\n Digite o codigo do departamento: ");
	scanf("%d", &codigDepto);
	// escolher qual aumento aplicar - calcular o pre�o novo
	if(codigDepto == 1)
	{
		aumento = preco * 0.05;
	}
	else
	{
		aumento = preco * 0.074;
	}
	// calcular o pre�o com aumento
	precoNovo = preco + aumento;
	printf("\n Preco R$ %.2f \n Aumento R$ %.2f \n Preco com aumento R$ %.2f \n\n", preco, aumento, precoNovo);	
	return 0;
}