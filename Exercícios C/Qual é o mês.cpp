#include <stdio.h>
main()
{
	
	int num;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	switch(num)
	{
		case 1: printf("\n Janeiro \n");
		break;
		case 2: printf("\n Fevereiro \n");
		break;
		case 3: printf("\n Marco \n");
		break;
		case 4: printf("\n Abril \n");
		break;
		case 5: printf("\n Maio \n");
		break;
		case 6: printf("\n Junho \n");
		break;
		case 7: printf("\n Julho \n");
		break;
		case 8: printf("\n Agosto \n");
		break;
		case 9: printf("\n Setembro \n");
		break;
		case 10: printf("\n Outubro \n");
		break;
		case 11: printf("\n Novembro \n");
		break;
		case 12: printf("\n Dezembro \n");
		break;
		default:
			printf("\n\t O numero digitado nao corresponde a um mes \n\n");
			break;
	}
	return 0;
}