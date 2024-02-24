//atv02
#include <stdio.h>
#include <stdlib.h>

float sala, valo, empr, mens;
int veze;

int main (void)
{
	//laço de repetição do/while para repetir o programa se o usuario digitar o valor 13 ou mais no numero de parcelas
	do
	{
		printf("Digite o valor do salario:\n");
		scanf("%f", &sala);
		printf("Digite o valor do emprestimo:\n");
		scanf("%f", &valo);
		printf("Digite o numero de parcelas \n");
		scanf("%d", &veze);
		//condição se o numero de parcela digitado for maior que 12
		if(veze>=13)
		{	
			printf("Numero de parcelas INVALIDO\n");
			printf("\n");
			printf("<<< O NUMERO MAXIMO DE PARCELAS E DE ATE 12X, TENTE NOVAMENTE >>>\n");
			printf("\n");
		}
		//condição se o numero de parcela digitado for igual ou menor que 12
		else
		{	
			//funçoes das variaveis
			empr=sala*0.20;
			mens=valo/veze;
			printf("O valor de cada parcela e de R$%.2f\n", mens);
			//condição se o valor da mensalidade for maior que 20% do salario
			if (mens>empr)
			{
				printf("Emprestimo nao concedido\n");
			}
			//condição se o valor da mensalidade for menor que 20% do salario
			else
			{
				printf("Emprestimo concedido\n");
			}
		}
	}while (veze>=13);
	return 0;	
}
