//atv06
#include <stdio.h>
#include <stdlib.h>

int num;

int main(void)
{	
	printf("digite um numero: \n");
	scanf("%d",&num);
	
	if (num%2==0)
	{
		printf("O numero %d e par\n",num);
	}	
	else 
	{
		printf("o numero %d e impar\n",num);
	}
	return 0;
}


