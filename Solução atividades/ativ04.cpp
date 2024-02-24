//atv04
#include <stdio.h>
#include <stdlib.h>

float traLab, avaSem, exaFin;
float medPon;

int main (void)
{
	printf("Digite a nota do TRABALHO DE LABORATORIO\n");
	scanf("%f", &traLab);
	printf("Digite a nota da AVALIACAO SEMESTRAL\n");
	scanf("%f", &avaSem);
	printf("Digite a nota do EXAME FINAL\n");
	scanf("%f", &exaFin);
	//variavel para calcular a media	
	medPon=((traLab*2+avaSem*3+exaFin*5)/10);
	printf("Sua media e %.1f\n", medPon);
	//condição if,else if & else para determinar  
	if(medPon>=0 && medPon<=2.9)
	{
		printf("Voce foi REPROVADO\n");			
	}
	else if (medPon>=3 && medPon<=4.9)
	{
		printf("Esta de RECUPERACAO\n");			
	}
	else
	{
		printf("APROVADO\n");
	}
	return 0;	
}
