#include <stdio.h>
#include <stdlib.h>
//Declarando constante para obter Título:
#define title "\nBreak e Continue"
int main()
	{
	printf("%s", title);
	printf("\n\n-------------BREAK-------------");
	printf("\n\nO Break pode ser utilizado para \"quebrar\" a condicao de um laco:\n");
	int i;
	for(i = 0; i <= 10; i++)
		{
		printf("\nNumero %d", i);
		if(i == 5)
			{
			break;
			}
		}
	printf("\n\nO Break encerra progresso do laco, porem nao tem poder\n fora dele, tal como esta mensagem esta fora do For\n\n");
	printf("Agora para ver funcionamento do \"CONTINUE\" e ver a diferenca\n digite \"y\" ou para sair \"n\" ");
	char resp;
	scanf("%c", &resp);
	if(resp == 'n')
		{
		return 0;
		}
	else if(resp == 'y')
		{
		printf("\n-------------CONTINUE-------------\n\n");
		printf("O \"CONTINUE\" por sua vez tambem ignorara o valor referente ao que foi comparado no if\n porem permanecera dentro do laco ate que o loop seja satisfeito\n\n");
		for(i = 0; i<=10; i++)
		{
		if(i == 5)
			{
			continue;
			}
		printf("\n%d", i);
		}
		}
	else if(resp != 'y' || resp != 'n')
		{
		return main();
		}
	system("pause");

	}


