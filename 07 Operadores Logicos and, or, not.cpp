#include <stdio.h>
#include <stdlib.h>
//Definindo constande que dará título ao código
#define title "--------Operadores Logicos--------"
int main()
	{
	printf("\n%s", title);
	
	float notaEscola;
	float notaFaculdade;
	
	printf("\n\nContexto: Um aluno precisa ter uma nota minima de 4 pontos(do total de 10), para que \nassim tenha direito a realizar Exame para entrar na Faculdade.");
	printf("\nE claro, mesmo que possa realizar o Exame, tera que atingir nota superior a 70%% para\n enfim garantir a vaga, e caso atinja pontuacao total ganhara uma bolsa de 100%%!\n");
	//Dentro de um printf, para que seja impresso % deve-se na sintaxe escrever '%%'
	printf("\n\nDigite a nota do aluno: ");
	scanf("%f", &notaEscola);
	
	if (notaEscola >= 4)
		{
		printf("\nAluno tem direito a fazer Exame para faculdade!");
		printf("Digite a nota do Exame: ");
		scanf("%f", &notaFaculdade);
			if (notaFaculdade >=7 && notaFaculdade <= 9.9)
			{
			printf("\n\nALUNO APROVADO MAS PASSIVO DE MENSALIDADES\tNOTA ALCANCADA: %.2f", notaFaculdade);
			}
			else if(notaFaculdade == 10)
			{
			printf("\n\nIncrivel! Aluno alcancou nota total, e ganhara bolsa de 100%%!!!");
			}
			else if(notaFaculdade < 7)
			{
			printf("Sinto muito, aluno reprovado!\t NOTA: %.2f", notaFaculdade);
			}
		}
	else printf("Nota da escola insuficiente para ter acesso ao Exame para Faculdade \t Nota da Escola: %.2f", notaEscola);
	system("pause");
	}
