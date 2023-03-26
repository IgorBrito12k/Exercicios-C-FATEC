//inclusão de biblioteca
#include<stdio.h> 

main()
{
	float ValorCompra = 0.0, TotalVendaVis = 0.0, TotalVendaPra = 0.0, Totalvendas = 0.0;
	char Pagamento;
	//loop para calcular os totais solicitados
	
	while(ValorCompra >= 0.0)
	{
		printf("\n Digite o valor da compra R$: ");
		scanf("%f", &ValorCompra);
		if (ValorCompra >= 0.0)
		{
			printf("\n\n Digite o tipo de pagamento v - a vista // P - Prazo: \n");
			fflush(stdin);
			scanf("%c", Pagamento);
			
			//escolher tipo de pagamento
			
			switch(Pagamento)
			{
				case 'v': case 'V': // Arrumar isso aqui '
					TotalVendaVis = TotalVendaVis = ValorCompra;
					break;
				case 'p': case 'P':
					TotalVendaPra = TotalVendaPra + ValorCompra;
					break;
				default:
					printf("\n\n tipo de pagamento invalido. Tente novamente \n");
			}
		}
		else
		{
			printf("\n Programa finalizado com sucesso \n\n");
		}
	}
	Totalvendas = TotalVendaVis + TotalVendaPra;
	//saída de dados
	printf("\n\n Total de vendas a vista e de: R$ %.f \n", TotalVendaVis);
	printf("\n\n Total de vendas a prazo e de: R$ %.f \n", TotalVendaPra);
	printf("\n\n Total de vendas é de: R$ %.f \n", Totalvendas);
	
	return 0;
}