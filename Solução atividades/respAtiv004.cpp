//respAtv04
#include <stdio.h>
#include <stdlib.h>
//as variaveis quant, somaPar & multiImpar são usadas como contador
int n1, n2, soma, quant=1, somaPar=0, multImpar=1;

int main (void)
{
	printf("Digite um numero\n");
	scanf("%d", &n1);
	printf("Digite mais um numero\n");
	scanf("%d", &n2);
	soma=n1+n2;
	printf("Os numeros somados e %d\n", soma);
	//laço FOR p mostrar os numeros
	for(quant==1; quant<=soma; quant++)
	{
		//condição p mostrar os pares
		if(quant%2==0)
		{
			printf("%d PAR\n", quant);
			somaPar=somaPar+quant;
		}
		else
		{
			printf("%d IMPAR\n", quant);
			//variavel p multiplicar
			multImpar=multImpar*quant;
		}
	}
	
	printf("Os numeros PARES SOMADOS e %d\n", somaPar);
	printf("Os numeros IMPARES MULTIPLICADOS e %d\n", multImpar);
	
	return 0;
}
