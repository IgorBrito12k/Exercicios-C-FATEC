#include <stdio.h>
//Programa principal
int main ()
{
	//declaração de variáveis
	
	float salario, vendas, comissao, impostos, salarioFinal;
	
	 //armazenamento - atribuir os valores do salário e das vendas
	 
	 salario = 2500.00;
	 vendas = 10000.00;
	 
	 //Processamento - calcular comissao, impostos e salário final
	 
	 comissao = vendas * 0.075;
	 salarioFinal = salario + comissao;       //representa o salário bruto
	 impostos = salarioFinal * 0.03;
	 salarioFinal = salarioFinal - impostos;  //representa o salário líquido
	 
	 //sáida de dados
	 
printf("n\ Salario R$ %.2f \n Comissão R$ %.2f \n Imposto R$ %.2f \n Salário Final R$ %.2f \n", salario, comissao, impostos, salarioFinal);
return 0;
	
}