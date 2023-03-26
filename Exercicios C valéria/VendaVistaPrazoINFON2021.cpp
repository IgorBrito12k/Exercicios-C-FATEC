// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declarar e inicializar as variáveis
	float valorCompra = 0.0, totalVendasVista = 0.0, totalVendaPrazo = 0.0, totalVendas = 0.0;
	char codigoPgto;
	// loop para calcular os totais solicitados
	while(valorCompra >= 0.0)
	{
		// comunicação com usuário e entrada de dados
		printf("\n Digite o valor da compra R$ ");
		scanf("%f", &valorCompra);
		if(valorCompra >= 0.0)
		{
			printf("\n Digite o tipo de pagamento V - a vista / P - a prazo: ");
			fflush(stdin);
			scanf("%c", &codigoPgto);
			// escolher o tipo de pagamento
			switch(codigoPgto)
			{
				case 'v': case 'V':
					totalVendasVista = totalVendasVista + valorCompra;
					break;
				case 'p': case 'P':
					totalVendaPrazo = totalVendaPrazo + valorCompra;
					break;
				default:
					printf("\n Tipo de pagamento invalido. Tente novamente\n");
			}
		}
		else
		{
			printf("\n Programa sera finalizado com sucesso \n\n");
		}
	}
	totalVendas = totalVendasVista + totalVendaPrazo;
	printf("\n Total de Vendas a vista    R$ %.2f \n", totalVendasVista);
	printf("\n Total de Vendas a prazo    R$ %.2f \n", totalVendaPrazo);
	printf("\n Total de Vendas realizadas R$ %.2f \n", totalVendas);
	return 0;
}