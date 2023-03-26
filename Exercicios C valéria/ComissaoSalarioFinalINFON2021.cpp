// inclusão de bibliotecas
#include <stdio.h>
//programa principal
int main()
{
	// declaração das variáveis
	float salario, vendas, comissao, impostos, salarioFinal;
	
	// armazenamento - atribuir os valores do salário e das vendas
	salario = 2500.00;
	vendas  = 10000.00;
	
	// processamento - calcular comissao, impostos e salário final
	comissao = vendas * 0.075;
	salarioFinal = salario + comissao; 			// representa o salário bruto
	impostos = salarioFinal * 0.03;
	salarioFinal = salarioFinal - impostos; 	// representa o salário líquido
	
	// saida de dados
	printf("\n Salario R$ %.2f \n Comissao R$ %.2f \n Impostos R$ %.2f \n Salario Final R$ %.2f \n\n", salario, comissao, impostos, salarioFinal);
	return 0;
}