#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
    char produto[5][10];
    int codiProd[3] = {0,0,0}, contCompra;
    float quantProd[3]= {0,0,0}, precoProd[3] = {0,0,0}, totalProd[3] = {0,0,0}, totalVendas;

	 system("cls");
	
    
    for(int contaVendas = 1; contaVendas <= 3; contaVendas ++ ) 
    {
        printf("Pedido numero %.3d\n\n", contaVendas); 

		for(int contaItens = 1; contaItens <=3; contaItens ++) 
		{
			printf("Digite o codigo qual e o codigo do doce \n\n 1: Trufa\n 2: Torta\n 3: Bolo\n\n");
 			scanf("%d", &codiProd[contaItens - 1]);
 			
			if( contaItens <= 3 )
			{
				printf("Digite qual sera quantidade de doce (KG): ");
    			scanf("%f", &quantProd[contaItens - 1]);
			}
			else
			{
				("\nDigite um número valido, por favor");
			}	
    		
    		switch (codiProd[contaItens - 1])
    		{
        		case 1: 
		            strcpy(produto[contaItens - 1],"trufa");
		            if ( quantProd[contaItens - 1] > 0)
		            {
		                if ( quantProd[contaItens - 1] <= 5)
		                {
		                    precoProd[contaItens - 1] = 25.0;
		                }
		                else
		                {
		                    precoProd[contaItens - 1] = 22;
		                }
		            }
		            break;

        		case 2: 
		            strcpy(produto[contaItens - 1],"torta");
		            if ( quantProd[contaItens - 1] > 0)
		            {
		                if ( quantProd[contaItens - 1] <= 5)
		                {
		                    precoProd[contaItens - 1] = 24.45;
		                }
		                else
		                {
		                    precoProd[contaItens - 1] = 22.25;
		                }
		            }
		            break;

        		case 3: 
		            strcpy(produto[contaItens - 1],"bolo");
		            if ( quantProd[contaItens - 1] > 0)
		            {
		                if ( quantProd[contaItens - 1] <= 5)
		                {
		                    precoProd[contaItens - 1] = 35;
		                }
		                else
		                {
		                    precoProd[contaItens - 1] = 30;
		                }
		            }
		            break;
 			}

    		totalProd[contaItens - 1] = quantProd[contaItens - 1] * precoProd[contaItens - 1];
    		
    		printf("\n\nDeseja encerrar sua compra[1 : sim - 2: nao]");
    		scanf("%d", &contCompra);
    		
    		if (contCompra == 1)
			{
				break;
			}
		}

    	printf("\n Nota Fiscal: %d \n\n", contaVendas);
    	
    	for(int contaItens = 1; contaItens <=2; contaItens++)
		{
	 	 	 if	(codiProd[contaItens - 1] == 0)
     	 	 {
				break;
             
			 }
   	   	   
			totalVendas = totalVendas + totalProd[contaItens - 1];
			 
			printf("Codigo =  %d\n%s = %.2f Kg(s) X R$ %.2f\nKg = R$ %.2f\n\n", 
                codiProd[contaItens - 1], 
                produto[contaItens - 1], 
                quantProd[contaItens - 1], 
                precoProd[contaItens - 1], 
                totalProd[contaItens - 1]
            );
   	   	   
		}
    	
		printf("Total da compra: R$ %.2f\n\n",totalVendas);
		totalVendas = 0;

        system("pause");

		for(int contaItens = 0; contaItens < 2; contaItens ++)
		{
			codiProd[contaItens] = 0;
			strcpy(produto[contaItens], "");
			quantProd[contaItens] = 0;
			precoProd[contaItens] = 0;
			totalProd[contaItens] = 0;
		}			

	}
	
	printf("\n\n\t--------------Fim de compras------------\n\n");
	
    system("pause");

   return 0;
}