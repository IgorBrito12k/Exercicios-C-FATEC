#include <stdio.h>

int main()
{
	float nota1, nota2, peso1, peso2, mediaponde;
	
	printf("\n Digite a nota 1 : \n");
	scanf("%f", &nota1);
	printf("Digite o Peso 1 : \n");
    scanf("%f", &peso1);
	printf("\n Digite a nota 2 : \n");
	scanf("%f", &nota2);
	printf("Digite o Peso 2 : \n");
    scanf("%f", &peso2);
	
	mediaponde = (nota1 * peso1 + nota2 * peso2 ) / (peso1 + peso2);
	
	printf ("n\ n\ Media Ponderada: %.3f \n \n", mediaponde);
	return 0;
}