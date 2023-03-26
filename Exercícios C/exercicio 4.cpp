#include <stdio.h>

main()

{
	float valorCompra, valorPagar;
	int codigo;
	
	printf("\n Digite o Valor da Compra: ");
	scanf("%f", &valorCompra);
	printf("\n Digite o codigo da compra: ");
	scanf("%f", &codigo);
	
	if (codigo == 1);
	{
		valorPagar = valorCompra -(valorCompra * 0,05);
	}
	printf(" \n Valor a pagar e: %f \n", valorPagar);
return 0;
}
