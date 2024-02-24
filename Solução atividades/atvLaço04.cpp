//atvLaço04
#include <stdio.h>
#include <stdlib.h>

int opcao;
float n1, n2;

int main(void)
{
	//laço de repetição while para repetir o programa caso a opção digitada seja diferente de 5
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
		//função switch case, para o usuario escolher sua opção de comando
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
			// opção default, caso o usuario escolha uma opção invalida na função
			default:printf("Opcao Invalida\n");
			printf("\n");
		}	
	}	
	return 0;
}
