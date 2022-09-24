#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Definindo constante qe servira de enunciado:
#define title "Vetores 2.0(MAIS ELABORADO)"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	printf("\n%s\n\n", title);
	printf("Este programa sera um calculador objetivo de media\n\n");
	printf("Digite quantos elementos diferentes deseja tirar a media: ");
	float elementos;
	scanf("%f", &elementos);
	int toPrint;
	int intermediario = toPrint - 1;
	float val[intermediario];
	float valSom = 0;
	for (toPrint = 1; toPrint <= elementos; toPrint++)
		{	
		printf("\nDigite o %dº elemento: ", toPrint);
		scanf("%f", &val[intermediario] );
		valSom += val[intermediario];
		}
	
	printf("\n\n-------------RESULTADO-------------\n\n");
	float media = valSom / elementos;
	printf("A media dos valores informado corresponde a: %.2f ", media);
	printf("\n\nOBRIGADO POR USAR MEU PROGRAMA!\n\n");
	system("pause");
	}
