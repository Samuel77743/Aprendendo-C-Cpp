#include <stdio.h>
#include <stdlib.h>
//Definindo Constante:
#define titulo "Bom dia, Vamos calcular!"
int main(void)
	{
	printf("%s", titulo);
	float a, b;
	printf("\n\n--------Insira os valores a serem operados--------\n\n");
	printf("Digite o primeiro termo: ");
	scanf("%f", &a);
	printf("\nDigite o segundo termo: ");
	scanf("%f", &b);
	printf("\n--------Resultados--------\n\n");
	printf("Soma: %.0f + %.0f = %.0f\n", a, b, a+b);
	printf("Subtracao: %.0f - %.0f = %.0f\n", a, b, a-b);
	printf("Multiplicacao: %.0f * %.0f = %.0f\n", a, b, a*b);
	printf("Divisao: %.0f / %.0f = %.2f\n", a, b, a/b);
	printf("--------Fim do Programa--------");
	system("pause");

	}
