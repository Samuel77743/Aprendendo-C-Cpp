#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define title "\n----------Algoróitmo de Fibonacci----------\n"

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	
	/* 			Algorítmo de Fibonacci:
	 	0, 1, 1, 2, 3, 5, 8, 13, 21, 34...   */
	 	
	int j = 0, k = 1, limite;
	
	printf("Qual valor limite deseja ser printado?\n(Exemplo: \"Só quero que seja impresso até o número 100\")\t RESPOSTA: ");
	scanf("%d", &limite);
	printf("%d\n%d", j, k);
	
	for(j = k+j; j <= limite;)
		{
		j = k + j;
		k = j + k;
		if(j >= limite || k>= limite)
			{
			break;
			}
		else printf("\n%d\n%d", j, k);
		}
	}
