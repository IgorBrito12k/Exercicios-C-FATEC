// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o e inicializa��o das vari�veis
	float preco, precoNovo, mediaAntesAumento = 0.0, mediaAposAumento = 0.0;
	int codigo, contProduto = 0;
	//loop para ler produtos
	do
	{
		// comunica��o com usu�rio e entrada de dados
		printf("\n Digite o codigo do produto: ");
		scanf("%d", &codigo);
		if(codigo >= 0)
		{
			printf("\n Digite o preco do Produto R$ ");
			scanf("%f", &preco);
			// calcular o pre�o com aumento
			precoNovo = preco + preco * 0.20;
			// soma dos pre�os e contar produto
			mediaAntesAumento = mediaAntesAumento + preco;
			mediaAposAumento  = mediaAposAumento  + precoNovo;
			contProduto++;
		}
		else
		{
			printf("\n Codigo invalido. Programa finalizado \n");
		}
	} while(codigo >= 0);
	// verificar se foi inserido pelo menos um produto
	if(contProduto > 0)
	{
		// calcular as medias
		mediaAntesAumento = mediaAntesAumento / contProduto;
		mediaAposAumento  = mediaAposAumento  / contProduto;
		// saida de dados
		printf("\n\n\t Media de precos antes do aumento R$ %.2f \n", mediaAntesAumento);
		printf("\n\t Media de precos apos o aumento R$ %.2f \n\n", mediaAposAumento);
	}
	else
	{
		printf("\n\n Nenhum produto cadastrado no sistema \n\n");
	}
	return 0;
}