//atvLaço02
#include <stdio.h>
#include <stdlib.h>

int quant=1, userQuant, val, maior=0, soma=0, cont=0;

int main (void)
{
	printf("Digite uma quantidade de valores\n");
	scanf("%d", &userQuant);
	
	while(quant<=userQuant)
	{
		
		quant++;
		printf("Digite um valor\n");
		scanf("%d", &val);
		//condição para identificar o maior valor
		if(quant==1)
		{
			maior=val;
		}
		else if(val>maior)
		{
			maior=val;
		}
		//condição para somar os valores, (ACUMULADOR) tambem pode ser representado por soma+=val;
		soma=soma+val;
		//condição para mostrar quantos valores foram digitados, (CONTADOR) tambem pode ser representado por cont++;
		cont=cont+1;
	}
	
	printf("O numero MAIOR e %d\n", maior);
	printf("Os valores somados e %d\n", soma);
	printf("Foram mostrados %d valores", cont);
	
	return 0;
}
