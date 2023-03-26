#include<stdio.h> 

int main()
{
	int i, n;
	float somatorio = 0.0;
	
	//comunicação com úusario e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &n);
	//repetição para calcular o somatório
	for (i= 1; i <= n; i = i++)
	{
		somatorio = somatorio + (1.0 / i);
	}
	//Saída de dados
	printf("\n\n\t ===>>> somatorio = %.4f \n\n", somatorio);
	return 0;
}


