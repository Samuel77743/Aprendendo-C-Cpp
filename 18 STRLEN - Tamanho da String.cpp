#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//Titulo:
#define title "STRLEN - Tamanho da String"
//Valor predefinido pro numero de posicoes do char:
#define tam 50

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	
	char str[tam];
	int quant;

	printf("\n\ncomando STRLEN ->> Apresenta o tamanho da String retornando um valor INTEIRO\n");
	puts("Digite uma sentença qualquer:");
	gets(str); 
	fflush(stdin);
	quant = strlen(str); //Deve-se colocar a variavel, pra assim podermos acessar o valor drenado pela funcao STRLEN
	printf("O texto possui \"%d caracteres\" incluindo espaços\n", quant);	
	puts("---------------------------------");
	puts("Imprimindo acessando posição a posição:");
	
	for (quant = 0; quant < strlen(str); quant++) //seria o msm de puts(str)
		{
		printf("%c", str[quant]);
		}
	printf("\n\n");
	system("pause");
	}




