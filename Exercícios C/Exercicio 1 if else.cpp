#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num1);
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num2);
	
	if(num1 < num2)
	{
		printf("\n\t Ordem crescente; %d - %d \n\n", num1, num2);
	}
	else
	{
		printf("\n\t Ordem Ordem crescente; %d - %d \n\n", num1, num2);
	}
	return 0;
}