//atvLaço03
#include <stdio.h>
#include <stdlib.h>

int quant=0, userQuant, num, par=0;

int main(void)
{
	printf("Digite a quantidade de numeros\n");
	scanf("%d", &userQuant);
	
	if(userQuant!=1000)
	{
		while(quant<userQuant)
		{
			quant++;
			printf("Digite um numero\n");
			scanf("%d", &num);
			
			if(num%2==0)
			{
				//variavel para somar a "quantidade" de numeros fornecidos pelo usuario
				par=par+1;
			}
		}
		printf("Foram digitados %d numeros pares\n", par);
		printf("Foram digitado %d numeros\n", quant);
	}
	else
	{
		printf("Programa encerrado\n");
	}
	return 0;
}
