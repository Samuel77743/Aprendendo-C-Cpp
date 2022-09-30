#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
//Definindo enunciado constante:
#define title "SCANF CONVECIONAL VS SCANF APRIMORADO"

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	printf("\n%s\n\n", title);
	printf("Existem dois tipos de SCANF:\n\nConvencional < scanf(\"%%c\", &letra); >: o que usei até aqui\n\nAprimorado: vai me permitir fazer entrada\nde dados com espaço!");
	printf("\n\nSINTAXE DO SCANF APRIMORADO: scanf(%%<tam. -1> [^\\n]s), string);\n\n");

	char s[10];
	//SCANF PADRÃO (me deixa invadir posições, o que é problemático; Não permiti espaços entre palavras)
	printf("Digite seu nome completo(scanf convencional em array de 10 posições): ");
	scanf("%s", s);
	fflush(stdin);//Este comando garante segurança na utilização dos scanfs
	printf("\nRESULTADO: %s", s);
	//SCANF APRIMORADO
	printf("\n\nSCANF APRIMORADO NA PRÁTICA(com array de 10 posições):\nDigite seu nome completo: ");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	printf("\nRESULTADO: %s", s);
	printf("\n\nAlém de permitir espaços este scanf se comporta\nadequadamente em relação a se utilizar apenas de caracteres a qual se tem posição reservada.\n\n");
	system("pause");
	}
