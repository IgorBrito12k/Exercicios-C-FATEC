// inclusão de bibiotecas
#include <stdio.h>
//programa principal
int main()
{
	// declaração das variáveis
	int x, y, resultado;
	char operador;
	// comunicação com usuário e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &x);
	printf("\n Digite um operador: \n + adicao \n - subtracao \n * multiplicacao \n / divisão \n %% resto da divisao : ");
	fflush(stdin);
	scanf("%c", &operador);
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", &y);
	switch(operador)
	{
		case '+':
			resultado = x + y;
			printf("\n\t Soma = %d \n\n", resultado);
			break;
		case '-':
			resultado = x - y;
			printf("\n\t Subtracao = %d \n\n", resultado);
			break;
		case '*':
			resultado = x * y;
			printf("\n\t Multiplicacao = %d \n\n", resultado);
			break;
		case '/':
			if(y != 0)
			{
				resultado = x / y;
				printf("\n\t Divisao = %d \n\n", resultado);	
			}
			else
			{
				printf("\n\t Nao existe divisao por ZERO \n\n");
			}
			break;
		case '%':
			if(y != 0)
			{
				resultado = x % y;
				printf("\n\t Resto da Divisao = %d \n\n", resultado);	
			}
			else
			{
				printf("\n\t Nao existe divisao por ZERO \n\n");
			}
			break;
		default:
			printf("\n\t Operador invalido... tente novamente... \n\n");
			break;
	}	
	return 0;
}