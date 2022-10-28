#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define title "\n----------------Tabuada até o 10----------------"

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	puts(title);
	puts("");
	
	int first;
	int second;
	
	for(first = 1; first <= 10; first++)
		{
		for(second = 1; second <= 10; second++)
			{
			printf("\n%d x %d = %d", first, second, first*second);
			}			
		puts("");
		}
	system("pause");
}
