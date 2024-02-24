#include <stdio.h>
#include <stdlib.h>

float area, base, altu;

int main () 
{	
	printf("Digite o valor da base\n");
	scanf("%f", &base);
	printf("Digite o valor da altura\n");
	scanf("%f", &altu);
	//os caracteres || significa "OU"
	if(base<=0 || altu<=0)
	{
		printf("Dados invalidos");	
	}
	else
	{
		area=(base*altu)/2;
		printf("A area do triangulo com baseado nos valores dados e %.2f\n", area);
	}
	return 0;
}
