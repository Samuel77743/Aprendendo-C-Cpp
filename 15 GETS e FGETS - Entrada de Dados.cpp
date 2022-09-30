#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Definindo constante:
#define title "E/S de Dados: GETS & FGETS & PUTS"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	printf("\n%s", title);
	printf("\n\nOutros tipos de absorção de dados de String podem se feitos por: \"gets\' ou \"fgets\"");
	printf("\n\nE da mesma forma, para imprimir na tela conteúdo de uma string, podemos usar também o \"puts\"\n\n");
	
	char string[21]; //lembrando que a ultima posição de uma string deve ser reservaa ao caractere nulo
	//GETS
	printf("GETS == Digite uma sentença de no maximo 20 caracteres: ");
	gets(string); //Como scanf padrão, desrespeita o limite de posições estabelecido
	fflush(stdin); //descarrega nincho de memoria, garante entrada de dados adequada.
	puts("RESULTADO: "); //o PUTS salta linhas automaticamente, como se tivesse \n no final
	puts(string);
	puts(""); //deixando linha vazia para sentimento de organização no prompt
	
	//FGETS
	printf("FGETS == Digite uma sentença de no máximo 20 caractéres ");
	fgets(string, 20, stdin); // SINTAXE: fgets(<variavel>, <numero de posicoes>, stdin);
	fflush(stdin);
	puts(string);
	
	system("pause");
	
	}
