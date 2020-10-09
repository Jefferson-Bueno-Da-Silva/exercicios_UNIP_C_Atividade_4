/*

Desenvolver um programa que leia um número não determinado de valores e calcule e escreva a
média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores
negativos e o percentual de valores negativos e positivos.

*/

//Bibliotecas utilizadas:
#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS:
    //opção, contador, contador de numeros positivos, contador de numeros negativos.
    int op, cont, contPositivo, contNegativo;
    //numero, media/ soma/percentual negativo, percentual positivo.
    float valor, media, soma, perNegativo, perPositivo, valorPositivo, valorNegativo;

    do
    {
        //DISPLAY
        system("cls");

        printf("Digite um numero com o valor positivo ou negativo\n");
        scanf("%f", &valor);

        //PROCESSAMENTO
        cont++;
        if(valor > 0)
        {
            valorPositivo = valorPositivo + valor;
            contPositivo++;
        }

        if(valor < 0)
        {
            valorNegativo = valorNegativo + valor;
            contNegativo ++;
        }

        //INTERRUPÇÃO DA REPETIÇÃO
        printf("digite 0 para sair ou digite qualquer outro numero para continuar:\n");
        scanf("%i", &op);
    } while (op != 0);

    //PROCESSAMENTO
    soma = contPositivo + contNegativo;
    perPositivo = (contPositivo / soma) * 100;
    perNegativo = (contNegativo / soma) * 100;
    
    media = (valorPositivo + valorNegativo) / (valorPositivo + valorNegativo);

    //SAIDA DE DADOS:
    system("cls");
    printf("A media aritmetica dos valores lidos eh: %.2f\n", media);
    printf("A quantidade de valores positivos lidos eh: %i\n", contPositivo);
    printf("A quantidade de valores negativos lidos eh: %i\n", contNegativo);
    printf("A porcentagem de valores positivos lidos eh: %.2f%%\n", perPositivo);
    printf("A porcentagem  de valores negativos lidos eh: %.2f%% \n", perNegativo);


    system("pause");
    return 0;
}
