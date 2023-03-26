// inclusão bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	float saldoMedio, credito;
	int codigo;
	//loop para calcular o valor do crédito de cada cliente
	do
	{
		// comunicação com usuário e entrada de dados
		printf("\n Digite seu saldo medio R$ ");
		scanf("%f", &saldoMedio);
		if(saldoMedio > 600.00)
		{
			credito = saldoMedio * 0.40;
		}
		else
		{
			if(saldoMedio > 400.00)
			{
				credito = saldoMedio * 0.30;
			}
			else
			{
				if(saldoMedio > 200.00)
				{
					credito = saldoMedio * 0.20;
				}
				else
				{
					credito = 0.0;
				}
			}
		}
		// saida de dados
		printf("\n\n \tSaldo medio R$ %.2f \t valor do credito R$ %.2f \n", saldoMedio, credito);
		// verificar se tem mais dados para inserir no sistema
		printf("\n Digite 1 para finalizar: ");
		scanf("%d", &codigo);
	} while(codigo != 1);
	return 0;
}