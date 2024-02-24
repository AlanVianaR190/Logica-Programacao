//atv03
#include <stdio.h>
#include <stdlib.h>

int n;

int main (void)
{
	//laço de repetição do/while para repetir o programa se o usuario digitar um numero menor ou igual a 0
	do
	{
		printf("Digite um numero\n");
		scanf("%d", &n);
		//condição se o numero digitado for menor que 0 mostrar mensagem
		if (n<0)
		{	
			printf("Numero invalido\n");
		}
		else
		{
			printf("O numero digitado %d tem seu dobro %d\n", n,n*2);
		}
	}while(n<0);
	return 0;
}
