#include<stdio.h>
#include<stdlib.h>
int main()
{
	float PrecoFinal;
	int Tipos, Quantidade, Kilos;
	
	printf("\n ----------- Ola Valeria, Digite abaixo o Doce que voce deseja e quantos Kg --------- \n");
	printf("\n Nosso cardapio contem apenas:\n \n Trufa Tipo: 1 \n Torta Tipo: 2 \n Bolo Tipo: 3 \n\n");
	printf("\n Digite abaixo o TIPO de doce referente ao seu desejo \n");
	printf("\n Digite o Doce que voce deseja: ");
	scanf("%d", &Tipos);
	printf("\n Digite quanto Kg deste doce voce deseja: ");
	scanf("%d", &Kilos);
	printf("\n Digite quantos doces voce deseja: ");
	scanf("%d", &Quantidade);
	
	printf("\n\n---------Preco do Doce em Kg----------\n\n");
	
	//Resolver as trufas
	switch(Kilos)
	{	
		case 1:
			if ((Tipos = 1) && (Kilos <= 5))
			{
				printf("O preco da Trufa e de R$25 por Kg \n");
			}
			else
			{
				printf("O preco da Trufa e de R$22 por Kg \n");
			}
		break;
	//Resolver as Tortas
		case 2:
			if ((Tipos = 2) && (Kilos <= 5))
			{
				printf("O preco da Torta e de R$24,45 por Kg \n");
	   		}
	 		else
			{
				printf("O preco da Torta e de R$22,25 por Kg \n");
			}
		break;
	//Resolver o bolo
		case 3:
			if ((Tipos = 3) && (Kilos <= 5))
			{
				printf("O preco da Bolo e de R$35 por Kg \n");
			}
			else
			{
				printf("O preco da Bolo e de R$30 por Kg \n");
			}
	break;
	}
	PrecoFinal = Quantidade * Kilos;
	
	printf("\n valor das doces sera: R$ %.f \n\ ", PrecoFinal);
	printf("\n\n----------Fim do algoritmo----------\n\n");
}