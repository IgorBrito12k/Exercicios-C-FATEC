#include<stdio.h> 

int main()
{
	float SaldoMedio, Credito;
	int codigo;
	
	//loop para calcular o valor de crédito de cada cliete
	do
	{
		printf("\n Digite seu saldo medio: R$ ");
		scanf("%f", &SaldoMedio);
		
		if(SaldoMedio > 600.00)
		{
			Credito = SaldoMedio * 0.40;
		}
		else
		{
			if (SaldoMedio > 400.00)
			{
				Credito = SaldoMedio * 0.30;
			}
			else
			{
				if(SaldoMedio > 200.00)
				{
					Credito = SaldoMedio * 0.20;
				}
				else
				{
					Credito = 0.0;
				}
			}
		}
	   printf("\n\n \tSalto medio R$ %.2f \t valor do credito R$ %.2f \n", SaldoMedio, Credito);
  		// verificar se tem mais dados para inserir no sistema
  		printf("\n Digite 1 para continuar; ");
  		scanf("%d", &codigo);    	
   }	while(codigo != 1);
	return 0;
}