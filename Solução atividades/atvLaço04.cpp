//atvLa�o04
#include <stdio.h>
#include <stdlib.h>

int opcao;
float n1, n2;

int main(void)
{
	//la�o de repeti��o while para repetir o programa caso a op��o digitada seja diferente de 5
	while(opcao!=5)
	{
		printf("Digite o primeiro numero\n");
		scanf("%f", &n1);
		printf("Digite o segundo numero\n");
		scanf("%f", &n2);
		printf("\n");
		printf("---> Escolha uma opcao <---\n");
		printf("Digite 1 p SOMAR\n");
		printf("Digite 2 p SUBTRAIR\n");
		printf("Digite 3 p MULTIPLICAR\n");
		printf("Digite 4 p DIVIDIR\n");
		printf("Digite 5 p ENCERRAR\n");
		scanf("%d", &opcao);
		printf("\n");
		//fun��o switch case, para o usuario escolher sua op��o de comando
		switch(opcao)
		{
			case 1:printf("%.0f mais %.0f e igual %.0f\n", n1,n2,n1+n2);
			printf("\n");
			break;
			
			case 2:if (n1<n2)
			{
				printf("%.0f menos %.0f e igual %.0f\n", n2,n1,n2-n1);
				printf("\n");
			}
			else
			{
				printf("%.0f menos %.0f e igual %.0f\n", n1,n2,n1-n2);
				printf("\n");
			}
			break;
			
			case 3:printf("%.0f vezes %.0f e igual %.0f\n", n1,n2,n1*n2);
			printf("\n");
			break;
			
			case 4:if (n1==0 || n2==0)
			{
			printf("Numeros invalido\n");
			printf("\n");
			}
			else
			{
				printf("%.0f dividido por %.0f e igual %.2f\n", n1,n2,n1/n2);
				printf("\n");
			}
			break;
			
			case 5:printf("Programa encerrado\n");
			printf("\n");
			break;
			// op��o default, caso o usuario escolha uma op��o invalida na fun��o
			default:printf("Opcao Invalida\n");
			printf("\n");
		}	
	}	
	return 0;
}
