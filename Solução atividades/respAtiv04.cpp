#include <stdio.h>
#include <stdlib.h>

int n1, n2, soma, quant, somaPar = 0, multiImpar = 1;

int main (void)
{
	printf("Digite um numero\n");
	scanf("%d", &n1);
	printf("Digite um numero\n");
	scanf("%d", &n2);
	soma = n1 + n2;
	printf("Resultado Somado: %d\n", soma);
	printf("\n\n");
	// LACO "FOR" PARA MOSTRAR OS NUMEROS
	for (quant==1; quant<=soma; quant=quant+1)
	{	
		// CONDIÇÃO PARA CAPTURAR OS PARES
		if (quant%2==0)
		{
			printf("Par: %d\n", quant);
			somaPar = somaPar + quant;	
		}
		// CONDIÇÃO PARA CAPTURAR OS IMPARES
		else
		{
			printf("Impar: %d\n", quant);
			multiImpar = multiImpar * quant;
		}	
	}
	// VALORES FINAIS
	printf("Valor somado de Pares: %d\n", somaPar);
	printf("Valor multi dos Impares: %d\n", multiImpar);
	return 0;	
}
