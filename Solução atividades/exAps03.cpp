//exAps03
#include <stdio.h>
#include <stdlib.h>
//bibiloteca de operações/funções aritmeticas
#include <math.h>

int num=1, val, conj;

int main (void)
{		
	printf("Digite a quantidade de numeros\n");
	scanf("%d", &conj);
	printf("\n");
	
	for(num==1; num<=conj; num++)
	{
		printf("Digite um valor\n");
		scanf("%d", &val);
		printf("\n");
		
		if(val>=1)
		{
			printf("O QUADRADO do valor e %d\n", val*val);
			printf("O CUBO do valor e %d\n", val*val*val);
			//função "sqrt" da biblioteca de operações aritmeticas, esta função permite calcular a raiz do valor
			printf("A RAIZ do valor e %.1f\n", sqrt(val));
			printf("\n");
		}
		else
		{
			printf("Finalizar programa\n");
			//função break para finalizar o loop/programa caso o valor digitado for menor que "0"
			break;
		}
	}
	return 0;
}
