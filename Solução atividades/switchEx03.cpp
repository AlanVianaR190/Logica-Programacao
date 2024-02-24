//atvSwitch03
#include<stdio.h>
#include<stdlib.h>

int opcao,n1;

int main (void)
{
	printf("Digite a opcao desejada\n");
	printf("Digite 100 para cachorro quente\n");
	printf("Digite 101 para bauru simples\n");
	printf("Digite 102 para bauru com ovo\n");
	printf("Digite 103 para hamburguer\n");
	printf("Digite 104 para cheeseburguer\n");
	printf("Digite 105 para suco\n");
	printf("Digite 106 para refrigerante\n");
	scanf("%d", &opcao);
	//função switch case para o usuario escolher a opção
	switch(opcao)
	{
		case 100:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 9.20*n1);
		break;
		
		case 101:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 10.30*n1);
		break;
		
		case 102:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 11.50*n1);
		break;
	 
	    case 103:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 12.00*n1);
		break;
		
		case 104:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 17.00*n1);
		break;
		
		case 105:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 8.20*n1);
		break;
		
		case 106:printf("quantos?\n");
		scanf ("%d", &n1);
		printf("Preco %.2f\n", 7.00*n1);
		break;
	}	
	return 0;
}
