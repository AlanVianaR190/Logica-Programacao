//respAtv01
#include <stdio.h>
#include <stdlib.h>

float valoCar, custFab;

int main (void)
{	
	printf("Digite o custo de fabrica\n");
	scanf("%f", &custFab);
	
	if(custFab<=12000)
	{
		valoCar=custFab+(custFab*0.05);
		printf("O veiculo vai custar ao consumidor %.2f\n", valoCar);	
	}
	else if(custFab>=12001 && custFab<=25000)
	{
		valoCar=custFab+(custFab*0.10)+(custFab*0.15);
		printf("O veiculo vai custar ao consumidor %.2f\n", valoCar);	
	}
	else if(custFab>=25001)
	{
		valoCar=custFab+(custFab*0.15)+(custFab*0.20);
		printf("O veiculo vai custar ao consumidor %.2f\n", valoCar);
	}
	return 0;
} 
