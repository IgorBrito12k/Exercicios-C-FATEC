//inclus�o dde bibliotecas
#include <stdio.h>
//Programa principal
int main()	
	//declara��o de variaveis
	int a, b, c;
	//Comunica��o com o �suario 
	printf("\n Digite um n�mero inteiro: ");
	scanf("%d", &a);
	printf("\n Digite um n�mero inteiro: ");
	scanf("%d", &b);
	printf("\n Digite um n�mero inteiro: ");
	scanf("%d", &c);
	//Verificar quem � o maior n�mero
	if(a >= b && a >= c)
	{
	   	printf("\n \t Maior n�mero: %d \n\n", a);
	}
	else
	{
		if(b >= a && b >= c)
		{
		printf("\n \t Maior n�mero: %d \n\n", b);	
		}
		else
		{
		printf("\n \t Maior n�mero: %d \n\n", c);	
		}
	}
return 0;