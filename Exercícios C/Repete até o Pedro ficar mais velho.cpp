#include<stdio.h>
#include<stdio.h> 

main()
{
	float alturaJoao = 1.4, alturaPedro = 1.25;
	int anos = 0;
	
	while (alturaPedro <= alturaJoao)
	{
		alturaJoao = alturaJoao + 0.03;
		alturaPedro = alturaPedro +0.05;
		anos = anos + 1;
	}
	printf("\n\n Serao necessario %d para pedro ficar mais alto que Joao \n\n", anos);
	return 0;
}