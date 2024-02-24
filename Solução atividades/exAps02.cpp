//exAps02
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int opcao;
	float metro, km;
	//laço de repetição do/while para manter o loop do programa, so finalizando caso o usuario escola a opção "3"
	do
	{	
	printf("Digite a opcao desejada\n");
	printf("\n");
	printf("Digite 1 se deseja converter metros para km\n");
	printf("Digite 2 se deseja converter km para metro\n");
	printf("Digite 3 para finalizar o programa\n");
	printf("\n");
	scanf("%d", &opcao);
	printf("\n");
	
	switch (opcao) 
	{
		case 1:printf("Digite o valor em metros\n");
		scanf ("%f", &metro);
		printf("o valor convertido e de %.2f km\n", metro/1000);
		break;
		
	    case 2:printf("Digite o valor em km\n");
		scanf ("%f", &km);
		printf("o valor convertido e de %.2f metros\n", km*1000);
		break;
		
		case 3: printf("Programa finalizado\n");
		break;
		//opção defaul caso o usuario não escolha nenhuma das opções validas
		default : printf ("opcao invalida\n");
	}
	
	}while (opcao!=3);
}
