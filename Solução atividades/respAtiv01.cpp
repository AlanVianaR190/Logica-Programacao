//respAtv01
//emerVersion
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float valorCarro;

    printf("Digite o valor do Carro \n");
    scanf("%f", &valorCarro);

    if(valorCarro <= 12000)
	{//if começa como verdadeiro
        float valorPor = valorCarro * 0.05;
        float resFinalPor = valorPor + valorCarro;
        printf("Valor do carro é igual : %.2f", resFinalPor);
    }
	else if(valorCarro > 1200 && valorCarro <= 25000)
	{//o else if() junto é outra escolha verdadeira
        float resDistribuidor = valorCarro * 0.15;
        float resImposto = valorCarro * 0.10;
        float valorFinalCarro = valorCarro + (resDistribuidor + resImposto);
        printf("Valor do carro é igual : %.2f", valorFinalCarro);
    }
	else if(valorCarro > 25000)
	{//o else if() junto é outra escolha verdadeira
        float resDistribuidor = valorCarro * 0.15;
        float resImposto = valorCarro * 0.20;
        float valorFinalCarro = valorCarro + (resDistribuidor + resImposto);
        printf("Valor do carro é igual : %.2f", valorFinalCarro);
    }
    return 0;
}

