#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //Biblioteca que ajuda atribuir string pós declaração.
#define tam 20 //Será tamanho delimitado a cada string que vou usar
//Constante de titulo:
#define title "Declarações de String"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	
	char origem[tam] = {"Olá mundo!"};
	char destino[tam]; //Serão usadas para demonstras os comandos da biblioteca <string.h>
	printf("\nNormalmente strings só podem ser atribuidas no momento de declaração, ou na entrada de dados\nMAS, outra forma de atribuílas já no meio do codigo são viáveis");
	
	printf("\n\ncomando STRCPY ->> Altera conteúdo da string(Strings não sao alterados com \"=\")\n\n");
	printf("Antes do STRCPY:\n");
	puts(origem);
	puts(destino); //quaisquer impressão mostrada aqui se trata de um nincho de memória, como "yyyyyyy"

	printf("\nDepois do STRCPY:\n");
	strcpy(destino, origem); //"destino" recebe o valor de string atribuído em "origem"
	puts(origem);
	puts(destino); 

	printf("\n---------------------------------\n\n");
	system ("pause");
	}

