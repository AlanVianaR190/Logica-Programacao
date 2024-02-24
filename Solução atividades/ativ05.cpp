//atv05
#include <stdio.h>
#include <stdlib.h>

float valDola, valReal, conv;

int main (void)
{
	printf("Digite o valor do dolar em REAIS\n");
	scanf("%f", &valDola);
	printf("Digite a quantidade de dolares que deseja converter para REAIS\n");
	scanf("%f", &valReal);
	
	conv=valDola*valReal;
	
	printf("$%.2f e equivalente a R$%.2f", valReal, conv);
	
	return 0;	
}
