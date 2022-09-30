#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Declarando constante Título:
#define title "MATRIZ: Manipulação com FOR"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	//Matriz:
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	printf("\n\n Imprimindo a primeira LINHA da Matriz:\n");
	int m1 = 0;
	int m2;
	
	for(m2 = 0; m2 <= 2; m2++)
		{
		printf("\n%d", matriz[m1][m2]);
		}
	printf("\n\nImprimindo toda a \"Tabela\":\n");
	
	for (m1 = 0; m1 < 3; m1++)
		{								//Caramba, aja lógica, estes FORs permitirão que as 
		printf("\n-----------------");//linhas sejam incrementadas só dps que todas colunas forem.
		for (m2 = 0; m2 < 3; m2++)
			{
			printf("\n%d", matriz[m1][m2]);
			}
		}
	printf("\n\n");
	system("pause");
	}
