/*

3. Escrever um programa que leia uma quantidade desconhecida de números e conte quantos deles
estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar
quando for lido um número negativo.

*/

//
#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS:
    //opção, intervalo de [0-25], intervalo de [26-50],intervalo de [51-75], intervalo de [76-100].
    float intervalo1, intervalo2, intervalo3, intervalo4;
    //numero, media/ soma/percentual negativo, percentual positivo.
    float valor;

    do
    {
        //DISPLAY
        system("cls");
        printf("conte quantos numeros estao nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].\n");
        printf("Digite um valor positivo:\n");
        scanf("%f", &valor);

        //PROCESSAMENTO
        if(valor > 0 && valor <= 25)
        {
            intervalo1++;
        }

        if(valor > 26 && valor <= 50)
        {
            intervalo2++;
        }

        if(valor > 51 && valor <= 75)
        {
            intervalo3++;
        }

        if(valor > 76 && valor <= 100)
        {
            intervalo4++;
        }
        //INTERRUPÇÃO DA REPETIÇÃO
        if(valor < 0)
        {
            break;
        }
    } while (valor > 0);

    //SAIDA DE DADOS:
    system("cls");
    printf("A quantidade de numeros em no intervalo de [0-25] eh: %.2f\n", intervalo1);
    printf("A quantidade de numeros em no intervalo de [26-50] eh: %.2f\n", intervalo2);
    printf("A quantidade de numeros em no intervalo de [51-75] eh: %.2f\n", intervalo3);
    printf("A quantidade de numeros em no intervalo de [76-100] eh: %.2f\n", intervalo4);


    system("pause");
    return 0;
}