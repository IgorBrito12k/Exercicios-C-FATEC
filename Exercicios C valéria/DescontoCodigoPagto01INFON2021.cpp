// SOLUÇÃO 01
// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int codigoPagto;
	float valorCompra;
	// comunicação com usuário e entrada de dados
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
	// saída de dados
	printf("\n Total a pagar R$ %.2f \n\n", valorCompra);
	return 0;
	
}