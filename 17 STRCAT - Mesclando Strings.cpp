#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
//Constante que me dará enunciado ao programa:
#define title "STRCAT - Mesclando Strings"

#define tam 50 //Constante a ser usado para delimitar vetor Char

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts(title);
	
	char s1[tam] {"\"Sad thing is: Good people do bad things\""};
	char s2[tam] {" -Hosea Matthews"}; //espaço no inicio importante para qnd mesclar ter espaço entre textos
	
	printf("\ncomando STRCAT ->> Usado para mesclar conteúdo de duas Strings(como juntar uma string de nome + sobrenome)\n");
	printf("\nAntes do STDCAT:\n");
	printf("%s\n", s1);
	printf("%s\n", s2);
	
	printf("\nDepois do STDCAT:\n");
	strcat(s1, s2); //estou imendando o que estava em s2 pra dentro de s1, ficando s1 + s2
	puts(s1); //s1 tem o valor redeclarado para conteudo orginal de s1 + s2
	puts(""); 
	system("pause");
	}
	
	
