#include <stdio.h>
#include <stdlib.h>
//Adicionando título via Constante:
#define titulo "Operadores de Incrementação"

int main(void)
	{
	/* 
	Tipos de Incremento:
	'++' -> Incrementa em um. Ou seja a variável seria igual ao seu valor atual + 1
	'--' -> Decrementa em um
	'+=' -> Incrementa de acordo com valor referido descrito na frente. Ex: x += 3 (x foi incrementado em 3)
	'-=' -> Decrementa de acordo com valor referido descrito na frente. Ex: y -= 5 (x foi Decrementado em 5)
	'*=' -> 
	*/
	int x = 10;
	int y = 15;
	int z = 2;
	printf("\nValores originais:\n x=%d\n y=%d\n z=%d", x, y, z);
	printf("\n--------Pos incremento--------");
	x++;
	printf("\nx com o \"++\" tem o valor de: %d", x);
	y--;
	printf("\ny com o \"--\"  tem o valor de: %d", y);
	z *= 3;
	printf("\nz com o \"*=3\"tem o valor de: %d", z);
	z = 3;
	z /= 3;
	printf("\nz agora com \"/=3\" tem o valor de: %d", z);
	system("pause");

	}
	


