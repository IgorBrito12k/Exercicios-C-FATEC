#include<stdio.h> 

int main()
{
	int i, n;
	float somatorio = 0.0;
	
	//comunica��o com �usario e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &n);
	//repeti��o para calcular o somat�rio
	for (i= 1; i <= n; i = i++)
	{
		somatorio = somatorio + (1.0 / i);
	}
	//Sa�da de dados
	printf("\n\n\t ===>>> somatorio = %.4f \n\n", somatorio);
	return 0;
}


