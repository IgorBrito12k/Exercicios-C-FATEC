#include <stdio.h>
int main()
{
	float precoNovo, preco;
	int depart;
	
	printf("\n Digite o preco do produto: R$ ");
	scanf("%f", &preco);
    printf("\n Digite o codigo do departamento da empresa: ");
	scanf("%d", &depart);
	
	if(depart == 1)
	{
		precoNovo = preco + preco + 0.5;
	}	
	else
	{
		precoNovo = preco + preco + 0.074;
	}
	printf("\n Preco R$ %2.f \n Preco do aumento e R$ %.2f \n", preco, precoNovo);
	
	return 0;
}