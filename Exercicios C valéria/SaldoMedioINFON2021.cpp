// inclus�o bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	float saldoMedio, credito;
	int codigo;
	//loop para calcular o valor do cr�dito de cada cliente
	do
	{
		// comunica��o com usu�rio e entrada de dados
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