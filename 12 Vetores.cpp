#include <stdio.h>
#include <stdlib.h>
//Usando Constante para dar um enunciado ao Programa:
#define title "Vetores"

int main(void)
	{
	printf("\n%s\n\n", title);
	
	printf("Os vetores armazenam diferentes valores mas de forma sequencial na memoria!\nDessa forma a aplicacao fica mais eficiente, e mais conveniente acessar valores de uma mesma categoria.\n\n");
	printf("Media de valores na utilizando Vetores:\n\n");
	int val[5];
	val[0] = 10; //O primeiro acesso sempre e 0, dessa forma o ultimo vetor sempre sera o "(numero de posicoes) - 1"
	val[1] = 20;
	val[2] = 15;
	val[3] = 55;
	val[4] = 35;
	
	int media = (val[0] + val[1] + val[2] + val[3] + val[4]) / 5;
	
	printf("Dessa forma a media seria: %d\n\n", media);
	printf("No entanto existe uma maneira de declarar todos valores em uma linha, obtendo mesmo resultado\n");
	int val2[5] = {10, 20, 15, 55, 35}; //Maneira clean de declarar valores as posicoes.
	int media2 = (val2[0] + val2[1] + val[2] + val[3] + val[4]) / 5; 
	printf("Media: %d\n\n", media2);
	system("pause");
	}
