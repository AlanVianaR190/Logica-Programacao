//exAps05
#include <stdio.h>
#include <stdlib.h>

int num1=1, num2=0, num3=0;

int main (void)
{
//CONTAGEM COM ESTRUTURA DE REPETIÇÃO for
	for (num1==1; num1<=100; num1++ )
	{
		printf("%d ", num1);
	}
	printf("\n\n");
//CONTAGEM COM ESTRUTURA DE REPETIÇÃO while
	while(num2<100)
	{
		num2++;
		printf("%d ", num2);
	}
	printf("\n\n");
//CONTAGEM COM ESTRUTURA DE REPETIÇÃO do/while
	do
	{
		num3++;
		printf("%d ", num3);	
	}while(num3<=99);
	
	return 0;
}
