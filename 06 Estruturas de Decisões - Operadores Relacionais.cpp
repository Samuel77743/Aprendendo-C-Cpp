#include <stdio.h>
#include <stdlib.h>
//Gerando título imutável:
#define titulo "Estruturas de Decisoes - Operadores Relacionais"
int main()
	{
	printf("\n%s", titulo);
	printf("\n\n---------- IFs e ELSEs ----------");
	printf("\nNa estrutura de decisoes ha alguns operadores relacionais:");
	printf("\n == -> Comparacao especifica\n != -> Diferente de...\n >= -> Maior/Igual\n <= -> Menor Igual\n ");
	
	printf("\n\n----------Atividade IF e Else----------\n");
	float notaA;
	float notaB;
	
	printf("Duas provas valem 5 pontos cada, o aluno necessita 60% de pontuação pra ser aprovado\n");
	printf("\nDigite a nota do aluno na primeira prova: ");
	scanf("%f", &notaA);
	printf("\nDigite a nota do aluno na segunda prova: ");
	scanf("%f", &notaB);
	
	float media = notaA + notaB / 2;
	
	if (media >= 6)
		{
		printf("Aluno Aprovado!\n Nota final: %.2f", media);
		}
	else printf("Aluno Reprovado =(\n Nota final: %.2f", media);
	system("pause");
	}
