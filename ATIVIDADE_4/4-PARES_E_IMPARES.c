/*

4. Faça um programa estruturado que leia uma quantidade não determinada de números positivos
Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos
números lidos. O número que encerrará a leitura será zero.

*/

//Bibliotecas utilizadas:
#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS:
    //contador par, contador impar, valor digitado pelo usuario.
    int contPar = 0, 
        contImpar = 0, 
        valor, 
        contSoma = 0, 
        numerosPar = 0, 
        numerosImpar = 0;

    float mediaPar, 
        mediaTotal;
    
    do
    {
        //DISPLAY
        system("cls");

        printf("\t\rDigite um numero inteiro positivo\n\t\rDigite 0 para sair\n");
        scanf("%i", &valor);

        if (valor == 0)
            break;

        if((valor % 2) == 0 ){
            contPar++;
            numerosPar = numerosPar + valor;
        }else
        {
            contImpar++;
            numerosImpar = numerosImpar + valor;
        }
        contSoma++;

    } while (valor != 0);

    //PROCESSAMENTO
    mediaPar = numerosPar / contSoma;
    mediaTotal = (numerosImpar + numerosPar) / contSoma;

    //SAIDA DE DADOS:
    system("cls");
    printf("A quantidade de numeros digidados foi: %i\n", contSoma);
    printf("A Quantidade de numeros Pares eh %i\n", contPar);
    printf("A Quantidade de numeros Inpares eh %i\n", contImpar);
    printf("A media dos numeros pares eh de: %.2f\n", mediaPar);
    printf("A media total dos numeros digitados eh %.2f\n", mediaTotal);


    system("pause");
    return 0;
}
