//atv07
#include <stdio.h>
#include <stdlib.h>

int a, b, c;

int main(void)
{
	printf("Digite tres valores\n");
	scanf("%d%d%d", &a, &b, &c);
	// condição se os valores dados ter a possibilidade de formar um triangulo
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("E possivel formar um TRIANGULO\n");
		if(a==b && b==c && c==a)
		{
			printf("Com estes valores e possivel formar um triangulo EQUILATERO\n");
		}
		else if(a==b || b==c || c==a)
		{
			printf("Com estes valores e possivel formar um triangulo ISOSCELES\n");
		}
		else
		{
			printf("Com estes valores e possivel formar um triangulo ESCALENO\n");
		}
	}
	//condição se os valores dados não ter a possibildade de formar um triangulo
	else
	{
		printf("Nao e possivel formar um triangulo\n");
	}
	return 0;
}
