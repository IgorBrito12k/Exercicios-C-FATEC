// inclus�o de bibliotecas
#include <stdio.h>
//programa principal
int main()
{
	// declara��o das vari�veis
	float salario, vendas, comissao, impostos, salarioFinal;
	
	// armazenamento - atribuir os valores do sal�rio e das vendas
	salario = 2500.00;
	vendas  = 10000.00;
	
	// processamento - calcular comissao, impostos e sal�rio final
	comissao = vendas * 0.075;
	salarioFinal = salario + comissao; 			// representa o sal�rio bruto
	impostos = salarioFinal * 0.03;
	salarioFinal = salarioFinal - impostos; 	// representa o sal�rio l�quido
	
	// saida de dados
	printf("\n Salario R$ %.2f \n Comissao R$ %.2f \n Impostos R$ %.2f \n Salario Final R$ %.2f \n\n", salario, comissao, impostos, salarioFinal);
	return 0;
}