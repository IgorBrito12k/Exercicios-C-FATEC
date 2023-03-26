// inclusão de bibliotecas
#include <stdio.h>

// programa principal
main()
{
	// declaração e inicializando as variáveis
   int i = 1, n;
   float somatorio = 0.0; // inicializando o valor da variável
   
   printf("\n Digite um número inteiro: ");
   scanf("%d", &n);		// entrada de dados
   // loop para gerar as frações e calcular o somatório
   while(i <= n)
   {
   		somatorio = somatorio + (1.0 / i);
   		i++;
   }
   // saída de dados
   printf("\n\n\t Somatorio =  %.5f \n\n", somatorio);
   return 0;
}