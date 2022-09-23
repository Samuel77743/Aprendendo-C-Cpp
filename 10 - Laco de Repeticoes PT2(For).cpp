#include <stdio.h>
#include <stdlib.h>
//Definindo constante que irá me garantir um enunciado:
#define title "Laco de Repeticao FOR" //O for é semelhante ao While, porém mas coveniente para arrays
int main(void)
	{
	printf("O For e mais um laco, um pouco elegante \npara atividades futuras!");
	// Sintaxe: for(valor inicial; condição de satisfação; incremento;) {<Bloco de comando}
	printf("Objetivo: Escolha quantas vezes quer que seja\n impresso \"Red Dead Redemption 2\" e o melhor jogo do mundo\n");
	int contador;
	int resposta;
	printf("Sua escolha: ");
	scanf("%d", &resposta);
	for(contador = 1; contador <= resposta; contador++ )
		{
		printf("\n\"Red Dead Redemption 2\" e o melhor jogo do mundo!");
		}
	system("pause");
	}
