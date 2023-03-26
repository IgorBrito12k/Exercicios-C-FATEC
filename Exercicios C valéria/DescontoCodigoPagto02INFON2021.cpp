// SOLUÇÃO 02
// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int codigoPagto;
	float valorCompra, pagamento, desconto;
	// comunicação com usuário e entrada de dados
	printf("\n Digite o valor da compra R$ ");
	scanf("%f", &valorCompra);
	printf("\n Digite o codigo do pagamento: ");
	scanf("%d", &codigoPagto);
	desconto = 0.0;		// inicializando a variável
	// verificar se o cliente tem direito ao desconto
	if(codigoPagto == 1)
	{
		// dar o desconto
		desconto = valorCompra * 0.05;
	}	
	// calcular o valor a pagar
	pagamento = valorCompra - desconto;
	// saída de dados
	printf("\n Valor da Compra R$ %.2f \n Desconto R$ %.2f \n Total a pagar R$ %.2f \n\n", valorCompra, desconto, pagamento);
	return 0;
	
}