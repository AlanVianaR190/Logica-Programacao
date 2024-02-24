//respAtv02
#include <stdio.h>
#include <stdlib.h>

float peso, altu, imc;

int main (void) 
{	
	printf("Digite o peso\n");
	scanf("%f", &peso);
	printf("Digite a altura\n");
	scanf("%f", &altu);
	printf("Seu peso %.2f e sua altura %.2f\n", peso,altu);
	
	imc=peso/(altu*altu);
	
	printf("Seu IMC e %.2f\n", imc);
	
	if(imc<=18.5)
	{
		printf("Abaixo do peso");
	}
	else if(imc>=18.6 && imc<=24.9)
	{
		printf("Saudavel");	
	}
	else if(imc>=25.0 && imc<=29.9)
	{
		printf("Peso em excesso");
		
	}
	else if(imc>=30.0 && imc<=34.9)
	{
		printf("Obesidade grau I");	
	}
	else if(imc>=35.0 && imc<=39.9)
	{
		printf("Obesidade grau II (severa)");	
	}
	else
	{
		printf("Obesidade grau III (morbida)");
	}
	return 0;
}
