// SOLU��O 01
// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int codigoPagto;
	float valorCompra;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite o valor da compra R$ ");
	scanf("%f", &valorCompra);
	printf("\n Digite o codigo do pagamento: ");
	scanf("%d", &codigoPagto);
	// verificar se o cliente tem direito ao desconto
	if(codigoPagto == 1)
	{
		// dar o desconto
		valorCompra = valorCompra - (valorCompra * 0.05);
	}	
	// sa�da de dados
	printf("\n Total a pagar R$ %.2f \n\n", valorCompra);
	return 0;
	
}