#include <stdio.h>

int main()
{
        int duck,
            contador;

        printf("Quantas patinhos a mamae Pata tem? ");
        scanf("%d", &duck);

        contador = duck;
        for( contador = duck; contador > 1; contador -1)
        {
            printf("\n %d patinhos foram passear\n", contador);
            printf("Alem das montanhas\n");
            printf("Para brincar\n");
            printf("A mamae gritou: Qua, qua, qua, qua\n");
            printf("Mas so %d patinhos voltaram de la.\n\n", contador--);
		}
   	   	    printf("1 patinho foi passear\n");
        	printf("Alem das montanhas\n");
        	printf("Para brincar\n");
        	printf("A mamae gritou: Qua, qua, qua, qua\n");
        	printf("Mas nenhum patinho voltou de la.\n\n");

        	printf("A mamae patinha foi procurar\n");
        	printf("Alem das montanhas\n");
        	printf("Na beira do mar\n");
        	printf("A mamae gritou: Qua, qua, qua, qua\n");
        	printf("E os %d patinhos voltaram de la.\n", duck);
		
}