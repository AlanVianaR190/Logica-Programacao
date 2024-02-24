//respAtv03
#include <stdio.h>
#include <stdlib.h>

float area, base, altu;

int main () 
{	
	do
	{
		printf("Digite o valor da base\n");
		scanf("%f", &base);
		printf("Digite o valor da altura\n");
		scanf("%f", &altu);
		//os caracteres || significa "OU"
		if(base<=0 || altu<=0)
		{
			printf("Dados invalidos\n");
		}
		else
		{
			area=(base*altu)/2;
			printf("A area do triangulo com base nos valores dados e %.2f\n", area);
		}
	}while(base<=0 || altu<=0);
	
	return 0;	
}

