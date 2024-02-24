//atvSwitch02
#include<stdio.h>
#include<stdlib.h>

int opcao, n1, n2;
float n3,n4;

int main (void)
{
	printf("Digite a opcao desejada\n");
	printf("Digite 1 para SOMA DE DOIS NUMEROS\n");
	printf("Digite 2 para DIFERENCA ENTRE DOIS NUMEROS\n");
	printf("Digite 3 para PRODUTO ENTRE DOIS NUMEROS\n");
	printf("Digite 4 para DIVISAO ENTRE DOIS NUMEROS\n");
	scanf("%d", &opcao);
	//função switch case para o usuario escolher a opção
	switch(opcao)
	{
		case 1:printf("primeiro numero\n");
		scanf ("%d", &n1);
		printf("segundo numero\n");
		scanf ("%d", &n2);
		printf("resultado %d\n", n1+n2);
		break;
		
		case 2:printf("primeiro numero\n");
		scanf ("%d", &n1);
		printf("segundo numero\n");
		scanf ("%d", &n2);
		if (n1<n2)
		{
			printf("resultado %d\n", n2-n1);
		}
		else
		{
			printf("resultado %d\n", n1-n2);
		}
		break;
		
		case 3:printf("primeiro numero\n");
		scanf ("%d", &n1);
		printf("segundo numero\n");
		scanf ("%d", &n2);
		printf("resultado %d\n", n1*n2);
		break;
		
		case 4:printf("primeiro numero\n");
		scanf ("%f", &n3);
		printf("segundo numero\n");
		scanf ("%f", &n4);
		if (n3==0 || n4==0)
		{
			printf("Numero invalido");
		}
		printf("resultado %.2f\n", n3/n4);
		break;
	}
	//condição se a opção digitada pelo usuario for ivalida
	if(opcao<=0 || opcao>=5)
	{
		printf("Opcao Invalida\n");
	}
	return 0;
}
