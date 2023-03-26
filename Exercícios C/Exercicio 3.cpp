#include <stdio.h>

main()
{
	float notaProva, notaProva2, mediaTrabalho, mediaProva, mediaFinal;
	char nomeAluno[20];
	//Comunicação com usuario e entrada de dados
	printf("\n Digite o Nome do aluno: ");
	fflush(stdin);   //  Limpar o padrão de entrada e permitir a leitura de caractere ou string
	scanf("%s", &nomeAluno);
	printf("\n Digite a nota 1 : \n");
	scanf("%f", &notaProva);
	printf("Digite a nota 2 : \n");
    scanf("%f", &notaProva2);
    printf("Digite a media do trabalho : \n");
    scanf("%f", &mediaTrabalho);
    //Fazer o processamento - calcular as médias de prova e final
    mediaProva = (notaProva + notaProva2) / 2;
    mediaFinal = (0,7 * mediaProva) + (0,3 * mediaTrabalho);
    // Verificar se o aluno esta Aprovado
    if (mediaFinal >= 6.0)
	{
		printf("\n Aluno Aprovado");
	}
	printf("\n\n Aluno: %s - Media final %2.f \n\n", nomeAluno, mediaFinal);
	return 0;
}