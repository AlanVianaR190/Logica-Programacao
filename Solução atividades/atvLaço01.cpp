//atvLaço01
#include <stdio.h>
#include <stdlib.h>

int quant=1, val, soma=0;

int main (void)
{
	//laço de repetição for para repetir a entrada de valores
	for(quant==0; quant<=5; quant++)
	{
		printf("Digite um valor\n");
		scanf("%d", &val);
		//variavel para fazer a "soma" dos valores fornecidos pelo usuario
		soma=soma+val;
	}
	
	printf("A soma de todos os valores e %d\n", soma);
	
	return 0;
}
