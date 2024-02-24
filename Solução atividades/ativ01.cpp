//atv01
#include <stdio.h>
#include <stdlib.h>
//variaveis p os numeros
int n1, n2;

int main (void)
{	
	//comandos de saida(printf) e entrada(scanf) dos numeros 
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	//condição if, else if, else
	if(n1>n2)
	{
		printf("O numero %d e maior que o %d\n", n1,n2);
	}
	else if(n2>n1)
	{
		printf("O numero %d e maior que o %d\n", n2,n1);	
	}
	else
	{
		printf("O primeiro numero %d, e igual ao segundo numero %d\n", n1,n2);	
	} 
	 return 0;	 
}
