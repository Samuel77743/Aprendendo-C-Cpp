#include <stdio.h>
#include <stdlib.h>
//Dando título via constante ao programa:
#define title "Lacos de Repeticoes | While, Do-While"
int main(void)
{
	printf("\n%s", title);
	printf("\n\nLacos de repeticao servem para fazer um loop, ate que seja satisfeito valor requerido");
	printf("\n\nLaco WHILE:\n");
	
	int num = 1; //Inicializar a variável é muito importante, não fazer isso é comum e problemático.
	
	while (num <= 10)
	{
		printf("%d ", num);
		num++; //Valor de incremento que tornará possível ser satisfeito a condição num <= 10
	}
	printf("\n\n-----------------------\n");
	//Possui também Inicio, condição e incremento
	printf("\n\nLaco Do-While:\n");
	float num2;
	do
		{
		printf("\nInsira um numero maior que 5: ");
		scanf("%f", &num2);
		} while(num2 < 5);
	printf("\n\nSE CHEGOU AQUI ACREDITO QUE TENHA SEGUIDO A INSTRUCAO");
	system("pause");

	
			
}
