// inclus�o de bibliotecas
#include <stdio.h>

// programa principal
main()
{
	// declara��o e inicializando as vari�veis
   int i = 1, n;
   float somatorio = 0.0; // inicializando o valor da vari�vel
   
   printf("\n Digite um n�mero inteiro: ");
   scanf("%d", &n);		// entrada de dados
   if(n > 0)
   {
   		// loop para gerar as fra��es e calcular o somat�rio
	   do
	   {
	   		somatorio = somatorio + (1.0 / i);
	   		i++;
	   } while(i <= n);
	   // sa�da de dados
	  
   }
   printf("\n\n\t Somatorio =  %.5f \n\n", somatorio);
   return 0;
}