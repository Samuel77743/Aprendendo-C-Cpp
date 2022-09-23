#include <stdio.h>
#include <stdlib.h>
//Declarando constante que dara o enunciado
#define titulo "Diferenca de Break e Continue"

int main (void)
	{
	printf("\n%s", titulo);
	printf("\n\n----------BREAK----------");
	printf("\n\nO \"Break\" dentro de um laco de repeticao ira interrompe-lo,\ne evacuar a compilacao do bloco de comando dele prosseguindo do que esta fora dos \"{ }\"\n ");
	printf("\nExemplo:\n");
	
	int i;
	for(i = 1; i <= 10; i++)
		{
		printf("\n%d", i);
		if(i == 5)
			{
			break;
			}
		}
	printf("\n\nO Break impediu que fosse prosseguido a contagem ate 10 ordenada\npelo loop, e prosseguiu o compilamento para fora do loop,\nonde se encontra esta mensagem!\n\n");
	
	printf("Agora se deseja analisar o funcionamento do \"continue\" pressione \"y\", caso contrario pressione \"n\"\n SUA RESPOSTA: ");
	
	char resp;
	scanf("%c", &resp);
	if (resp == 'y')
		{
		printf("\n\nO \"continue\" por sua vez se diferencia por permancer no loop.\nO \"break\" havia encerrado o loop quando a variavel apareceu, o \"continue\" ira ignorar o restante da sessao atual do loop e recomeca-la, ao inves de sair fora do laco todo!");
		printf("\n\nEXEMPLO\:\n");
		for (i = 0; i <= 10; i++)
			{
			if(i == 5) //No caso do continue o IF tem que necessariamente vir antes do print,
				{		//...pois ele ira reiniciar o loop se for o caso da condicao, e o print for feito antes da conferencia se perde a logica
				continue;
				}
			printf("\n%d", i);
			}
		printf("\nPerceba que a condicao \"if i == 5\" antecedido do continue fez com que especificamente essa\nsessao seja ignorada.");
		}
	else if(resp == 'n')
		{
		printf("\n----------Operacao Encerrada----------\n");
		system("pause");
		return 0;
		}
	else return main();
	}
