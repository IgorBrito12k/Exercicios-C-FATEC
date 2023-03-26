// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declaração das variáveis
	int num;
	// comunicação com usuário e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	// verificar se o número corresponde  a um mês
	switch(num)
	{
		case 1:
			printf("\n\t JANEIRO \n\n");
			break;
		case 2:
			printf("\n\t FEVEREIRO \n\n");
			break;
		case 3:
			printf("\n\t MARCO \n\n");
			break;
		case 4:
			printf("\n\t ABRIL \n\n");
			break;
		case 5:
			printf("\n\t MAIO \n\n");
			break;
		case 6:
			printf("\n\t JUNHO \n\n");
			break;
		case 7:
			printf("\n\t JULHO \n\n");
			break;
		case 8:
			printf("\n\t AGOSTO \n\n");
			break;
		case 9:
			printf("\n\t SETEMBRO \n\n");
			break;
		case 10:
			printf("\n\t OUTUBRO \n\n");
			break;
		case 11:
			printf("\n\t NOVEMBRO \n\n");
			break;
		case 12:
			printf("\n\t DEZEMBRO \n\n");
			break;
		default:
			printf("\n\t O numero digitado nao corresponde a um mes \n\n");
			break;
	}
	return 0;
}