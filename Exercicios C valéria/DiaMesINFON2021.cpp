// inclus�o de bibliotecas
#include <stdio.h>
// programa principal
int main()
{
	// declara��o das vari�veis
	int num;
	// comunica��o com usu�rio e entrada de dados
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	// verificar se o n�mero corresponde  a um m�s
	switch(num)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:	
			printf("\n\t O mes tem 31 dias \n\n");
			break;
		case 2:
			printf("\n\t O mes tem 28 dias \n\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("\n\t O mes tem 30 dias \n\n");
			break;
		default:
			printf("\n\t O numero digitado nao corresponde a um mes \n\n");
			break;
	}
	return 0;
}
