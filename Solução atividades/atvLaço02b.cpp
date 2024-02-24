//atvLaço02b
#include <stdio.h>
#include <stdlib.h>

int quant=1, quantUser, valor, maior=0, acum=0, cont=0;

int main (void)
{
	printf("Digite uma quantidade de valores\n");
	scanf("%d", &quantUser);
	
	for(quant==0; quant<=quantUser; quant++)
	{
		printf("Digite um valor\n");
		scanf("%d", &valor);
		//condição para identificar o maior valor
		if(quant==1)
		{
			maior=valor;
		}
		else if(valor>maior)
		{
			maior=valor;
		}
		//condição para somar os valores, (ACUMULADOR) tambem pode ser representado por acum+=val;
		acum=acum+valor;
		//condiçõ para mostrar quantos valores foram digitados, (CONTADOR) tambem pode ser representado por cont++;
		cont=cont+1;
	}			
	
	printf("O numero maior e %d\n", maior);
	printf("Os valores somados e %d\n", acum);
	printf("Foram mostrados %d valores", cont);
	
	return 0;
}
