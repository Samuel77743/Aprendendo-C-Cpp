#include <stdio.h>
#include <stdlib.h>
//Declarando titulo em uma constante:
#define title "Desvio de Fluxo - Switch"
int main(void)
	{
	int num;
	printf("\n%s\n\n", title);
	printf("Switch e um comando semelhante ao IF, porem muito \nmais centrado, APENAIS COM COMPARACOES DE IGUALDADE:\n\n");
	printf("Os numeros de 1-7 corresponderao respectivamente aos dias da semana domingo - sabado\n\n");
	printf("Digite o um numero de 1 a 7: ");
	scanf("%d", &num);
	printf("\n");
	
	switch(num)
		{
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-Feira");
			break;
		case 3:
			printf("Terça-Feira");
			break;
		case 4:
			printf("Quarta-Feira");
			break;
		case 5:
			printf("Quinta-Feira");
			break;
		case 6:
			printf("Sexta-Feira");
			break;
		case 7:
			printf("Sabado");
			break;
		default: //Default tem uma função semelhante ao Else, se dirigindo ao alheio a diferentes opções que o codigo orientou
			printf("Valor Invalido");
			break;
		}
	system("pause");
	}
