#include <stdio.h>

int main()
{
	int x, y, resultado;
	char operador;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &x);
	printf("\n Digite uma operacao: \n + adicao \n - subtracao \n * multiplicacao \n / divisao \n ");
	fflush(stdin);
	scanf("%c", &operador);
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &y);
	
	switch(operador)
	{
		case '+':
			resultado = x + y;
			printf("\n\t Soma = %d \n\n", resultado);
			break;
		case'-':
			resultado = x - y;
			printf("\n\t Subtracao = %d \n\n", resultado);
			break;
		case'*':
			resultado = x * y;
			printf("\n\t multiplicacao = %d \n\n", resultado);
			break;
		case'/':
			if(y !=0)
			{
				resultado = x / y;
				printf("\n\t divisao = %d \n\n", resultado);
			break;
			}
			else
			{
				printf("\n\t Nao existe divisao por ZERO \n\n");
			}
			
	}
	return 0;
}