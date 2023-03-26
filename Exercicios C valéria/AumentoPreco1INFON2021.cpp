// SOLUÇÃO 1
// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int codigDepto;
	float preco, precoNovo;
	// comunicação com usuário e entrada de dados
	printf("\n Digite o preco do produto R$ ");
	scanf("%f", &preco);
	printf("\n Digite o codigo do departamento: ");
	scanf("%d", &codigDepto);
	// escolher qual aumento aplicar - calcular o preço novo
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