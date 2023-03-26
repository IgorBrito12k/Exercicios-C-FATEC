//inclusão dde bibliotecas
#include <stdio.h>
//Programa principal
int main()	
	//declaração de variaveis
	int a, b, c;
	//Comunicação com o úsuario 
	printf("\n Digite um número inteiro: ");
	scanf("%d", &a);
	printf("\n Digite um número inteiro: ");
	scanf("%d", &b);
	printf("\n Digite um número inteiro: ");
	scanf("%d", &c);
	//Verificar quem é o maior número
	if(a >= b && a >= c)
	{
	   	printf("\n \t Maior número: %d \n\n", a);
	}
	else
	{
		if(b >= a && b >= c)
		{
		printf("\n \t Maior número: %d \n\n", b);	
		}
		else
		{
		printf("\n \t Maior número: %d \n\n", c);	
		}
	}
return 0;