#include<stdio.h>

#define n 5 

int main()
{
	
int i, locacoes[80], locGratis[80], sobra[20];
char nomeCli[80][50]; // s�o 80 strings cada uma delas com no m�ximo 50 caracteres

//loop para ler os dados do 80 clientes: nome e loca��o

for(i = 0; i < n; i++)
{
	printf("\n Digite o nome: ");
	fflush(stdin);
	gets(nomeCli[i]);
	printf("\n Digite as locacoes: ");
	scanf("%d", &locacoes[i]);
}
//loop para calcular as loca��es gr�tis
for(i = 0; i < n; i++)
{
	locGratis[i] = locacoes[i] / 10;
	sobra[i] = locacoes[i] % 10;
}
//loop para mostrar os resultados; dados dos clientes e suas loca��es gr�tis
for(i = 0; i < n; i++)
{
	printf("\n\t %20s \t %5d \t %5d \t %5d \n", nomeCli[i], locacoes[i], locGratis[i], sobra[i]);
}

}