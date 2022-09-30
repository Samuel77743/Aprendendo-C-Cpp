#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 50

struct tipo_pessoa
	{
	int idade;
	float altura;
	char nome[tam];
	};
typedef tipo_pessoa tipo_pessoa; //renomeando a struct pra que possa ser chamado de forma mais viável

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa pes = {18, 1.60, "Moça"};
	//Atribuindo valores as variaveis criadas dentro de Struct:
	printf("\nIníco\n");
	printf("\nNOME: %s", pes.nome);
	printf("\nALTURA: %.2f", pes.altura);
	printf("\nIDADE: %d", pes.idade);
	
	//Reatribuindo Valores:
	pes.idade = 19;
	pes.altura = 1.84;
	strcpy(pes.nome, "Lendário");
	
	printf("\n\nNOME: %s", pes.nome);
	printf("\nALTURA: %.2f", pes.altura);
	printf("\nIDADE: %d", pes.idade);
	
	//Entrada de Dados:
	printf("\n\nEntrada de Dados: \n\n");
	printf("Digite o nome: ");
	gets(pes.nome);
	printf("\nDigite a idade: ");
	scanf("%d", &pes.idade);
	printf("Digite a altura: ");
	scanf("%f", &pes.altura);
	
	printf("\n\nNOME: %s", pes.nome);
	printf("\nALTURA: %.2f", pes.altura);
	printf("\nIDADE: %d", pes.idade);
	
	}
