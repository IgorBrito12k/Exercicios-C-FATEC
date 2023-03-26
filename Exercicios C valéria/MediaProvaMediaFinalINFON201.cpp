// inclusão de bibliotecas
#include <stdio.h>
// programa principal
int main(int argc, char** argv)
{
	float notaProva1, notaProva2, mediaTrab, mediaFinal, mediaProva;
	char nomeAluno[20];
	// comunicação com usuário e entrada de dados
	printf("\n Digite no nome do aluno: ");
	fflush(stdin);		// limpar o padrão de entrada e permitir a leitura de caracter ou string
	scanf("%s", &nomeAluno);
	printf("\n Digite a nota da prova 1: ");
	scanf("%f", &notaProva1);
	printf("\n Digite a nota da prova 2: ");
	scanf("%f", &notaProva2);
	printf("\n Digite a media de trabalho: ");
	scanf("%f", &mediaTrab);	
	// processamento - calcular as médias de prova e final
	mediaProva = (notaProva1 + notaProva2) / 2.0;
	mediaFinal = 0.7 * mediaProva + 0.3 * mediaTrab;
	// verificar se aluno aprovado
	if(mediaFinal >= 6.0)
	{
		printf("\n APROVADO ");
	}
	printf("\n Aluno: %s - Media Final: %.2f \n\n", nomeAluno, mediaFinal);
	return 0;
}