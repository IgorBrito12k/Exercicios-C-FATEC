#include <stdio.h>
#include <conio.h>
int main()
{
    float alturajoao, alturapedro;
    int anos = 0;    
    printf("\n Digite a altura do Joao: ");
    scanf("%f",&alturajoao);    
    printf("\n Digite a altura do Pedro: ");
    scanf("%f",&alturapedro);
    
    printf("\n Altura Joao    Altura Pedro  Anos\n");
    
	do
    {
        printf(" %.2f              %.2f        %d \n", alturajoao, alturapedro, anos);
		alturajoao  = alturajoao  + 0.03;
        alturapedro = alturapedro + 0.05;
        anos = anos + 1;
    } while (alturapedro <= alturajoao);
    
    printf(" %.2f              %.2f        %d \n", alturajoao, alturapedro, anos);    
    printf("\n\n Serao necessarios %d anos para Pedro ficar maia alto que Joao \n\n", anos);
    
	getch();
	return 0;
}
