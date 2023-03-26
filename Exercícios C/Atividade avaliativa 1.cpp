//Inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Algoritmo
main()
{
	float SalarioBruto, SalarioLiqui, Bonus, ValorVenda, NumFilhos, descontPorFalt, AjudaCusto, Imposto, BolsaFilho, dias, VoluntHoras;
	char Nome[20];
	
	//Comunicação com usuario e entrada de dados
	printf("\n ----------- Ola Valeria, Digite abaixo os dados de seu funcionario --------- \n");
	printf("\n Digite o Nome do funcionario: ");
	fflush(stdin);   //  Limpar o padrão de entrada e permitir a leitura de caractere ou string
	scanf("%s", &Nome);
	printf("\n Digite o salario bruto/mensal: ");
	scanf("%f", &SalarioBruto);
	printf("\n Digite o valor feito em vendas no mes: ");
	scanf("%f", &ValorVenda);
	printf("\n Digite quantos dias ele faltou ao trabalho: ");
    scanf("%f", &dias);
    printf("\n Digite quantas horas fez de trabalho voluntario: ");
    scanf("%f", &VoluntHoras);
    printf("\n Digite quantos filhos menores que 15 anos: ");
    scanf("%f", &NumFilhos);
    //Limpar tela By Xyco
    system("cls");
    printf("\n---------- Resultados---------\n\n");
    //Resolver o Bônus
    if( ValorVenda < 10000 )
	{
		printf("\n Voce nao bateu sua meta, nao recebera bonus!! \n");
	}
	else
	{
		Bonus = SalarioBruto * 0.15;
		printf("\n Parabens!! voce bateu sua meta e ganhou 15 por cento de bonus: R$ %.f \n", Bonus);
	}
	//Resolver as faltas
	if( dias <= 5 )
	{
		descontPorFalt = SalarioBruto * 0.025;
		printf("\n Voce faltou 5 dias ou menos sera descontado 2,5 por cento do seu salario: R$ %.f \n", descontPorFalt);
	}
	else
	{
		descontPorFalt = SalarioBruto * 0.10;
		printf("\n Voce faltou mais de 5 dias sera descontado 10 por cento do seu salario: R$ %.f \n", descontPorFalt);
	}
	//Resolver as horas de trabalho voluntário
	if( VoluntHoras <= 10)
	{
		AjudaCusto = VoluntHoras * 8; 
		printf("\n Voce teve 10 ou menos horas de trabalho voluntario, recebera uma ajuda de custo de R$8/h: R$ %.f \n", AjudaCusto);
	}
	else
	{
		AjudaCusto = VoluntHoras * 10; 
		printf("\n Voce teve menos de 10 horas de trabalho voluntario, recebera uma ajuda de custo de R$10/h: R$ %.f \n", AjudaCusto);
	}
	//Resolver o bolsa filho
	if( 0 >= NumFilhos )
	{
		 
		printf("\n O funcionario nao tem filhos, portanto nao tem direito ao Bolsa Filho \n");
	}
	else
	{
		BolsaFilho = NumFilhos * 250; 
		printf("\n Voce tem %.f filhos e tem direito ao Bolsa Filho no valor de: R$ %.f \n", NumFilhos, BolsaFilho);
	}
	//Resolver os impostos
	if(SalarioBruto <= 2460)
	{
		Imposto = SalarioBruto * 0.05;
		printf("\n Seu salario e ate R$2.460, taxa de imposto de 5 por cento: %.f \n", Imposto);
	}
	else
		if((SalarioBruto > 2460) && (SalarioBruto <= 5500))
		{
			Imposto = SalarioBruto * 0.07;	
			printf("\n Seu salario e de R$2460 ate R$5500, taxa de imposto de 7 por cento: %.f \n", Imposto);
		}
		else	
			if((SalarioBruto > 5500) && (SalarioBruto <= 10750))
			{
				Imposto = SalarioBruto * 0.09;	
				printf("\n Seu salario e de R$5500 ate R$10750, taxa de imposto de 9 por cento: %.f \n", Imposto);
			}
			else
				if(SalarioBruto > 10750)
				{
					Imposto = SalarioBruto * 0.11;
					printf("\n Seu salario e ate R$10.750, taxa de imposto de 11 por cento: %.f \n", Imposto);
				}
	//Mostrar dados finais ao cliente			
		SalarioLiqui = SalarioBruto + Bonus + BolsaFilho + AjudaCusto - descontPorFalt - Imposto;			
					
	printf("\n\n-------------Dados Finais solicitados------------\n\n");
	printf(" O funcionario %s, recebe um salario bruto no valor de: R$ %.f \n",Nome, SalarioBruto);
	printf("\n Imposto referente ao salario de: R$ %.f \n", Imposto);
	printf("\n Salario liquido: R$ %.f \n", SalarioLiqui);
	printf("\n\n ---------------- Fim do algoritmo-------------\n\n\n");
}