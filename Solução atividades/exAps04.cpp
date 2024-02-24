//exAps04
#include <stdio.h>
#include <stdlib.h>

int num=1, ano;

int main (void)
{
	printf("Digite a quantidade de ANOS\n");
	scanf("%d", &ano);
	printf("\n");
	//laço de repetição for para mostrar a diferença de altura em anos entre CHICO e ZE 
	for(num==1; num<=ano; num++)
	{
		printf("CHICO tera %.2f em %d anos\n", (0.02*num)+1.50, num);
		printf("ZE tera %.2f em %d anos\n", (0.03*num)+1.10, num);
		printf("\n");
	}

	if(ano<=40)
	{
		printf("Sera necessario %d anos para Ze ULTRAPASSAR Chico", 41-ano);
	}
	else
	{
		printf("Ze ULTRAPASSOU Chico");
	}
	
	return 0;
}
