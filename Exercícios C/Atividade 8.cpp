#include <stdio.h>
//Programa principal
int main ()
{
	//declara��o de vari�veis
	
	float salario, vendas, comissao, impostos, salarioFinal;
	
	 //armazenamento - atribuir os valores do sal�rio e das vendas
	 
	 salario = 2500.00;
	 vendas = 10000.00;
	 
	 //Processamento - calcular comissao, impostos e sal�rio final
	 
	 comissao = vendas * 0.075;
	 salarioFinal = salario + comissao;       //representa o sal�rio bruto
	 impostos = salarioFinal * 0.03;
	 salarioFinal = salarioFinal - impostos;  //representa o sal�rio l�quido
	 
	 //s�ida de dados
	 
printf("n\ Salario R$ %.2f \n Comiss�o R$ %.2f \n Imposto R$ %.2f \n Sal�rio Final R$ %.2f \n", salario, comissao, impostos, salarioFinal);
return 0;
	
}