#include<stdio.h>
#include<stdio.h> 

main()
{
	float alturaJoao = 1.4, alturaPedro = 1.25;
	int anos = 0;
	//loop para atualizar as alturas
	do
	{
		alturaJoao = alturaJoao + 0.03;
		alturaPedro = alturaPedro +0.05;
		anos = anos + 1;
	} while (alturaPedro <= alturaJoao);
	
	printf("\n\n Serao necessario %d para pedro ficar mais alto que Joao \n\n", anos);
	return 0;
}