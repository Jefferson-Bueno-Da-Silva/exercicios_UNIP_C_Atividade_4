/*

6. Faça um programa que receba valores inteiros positivos, calcule e mostre:

    ● Soma dos números digitados.
    ● Quantidade de números digitados.
    ● Média dos números digitados.
    ● Maior número digitado.
    ● Menor número digitado.
    ● Média dos números pares.
    ● Percentagem dos números ímpares entre todos os números digitados.

*/

#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS
    int valor,
        soma,
        maior,
        menor,
        count = 0,
        par = 0,
        valorPar = 0,
        impar = 0,
        somaImpar = 0;
    float mediaTotal,
        mediaPares,
        porcentagemImpar;
    
    do
    {
        //ENTRADA DE DADOS
        printf("Digite um valor inteiro positivo\nPrecione -1 para sair\n");
        scanf("%i", &valor);

        if (valor == -1)
            break;
        

        //PROCESSAMENTO
        soma = soma + valor;

        if (count == 0)
        {
            menor = valor;
            maior = valor;
        }
        

        if(menor > valor){
            menor = valor;
        }

        if(maior < valor){
            maior = valor;
        }
        //numeros pares
        if((valor % 2) == 0 ){
            valorPar = valorPar + valor;
            par++;
        }
        //numeros impares
        if ((valor % 2) != 0)
        {
            somaImpar = somaImpar + valor;
        }

        count++;
    } while (valor > 0);

    porcentagemImpar = (impar / count) * 100;
    mediaPares = valorPar / count;
    mediaTotal = soma / count;

    //SAIDA
    printf("A soma dos numeros digitados eh: \t%i\n", soma);
    printf("A quandidade de numeros digitados eh: \t%i\n", count);
    printf("A media dos numeros digitados eh: \t%.1f\n", mediaTotal);
    printf("O maior numero digitado eh: \t\t%i\n", maior);
    printf("O menor numero digitado eh: \t\t%i\n", menor);
    printf("A media dos numeros pares digitados eh \t%.2f\n", mediaPares);
    printf("A porcentagem de numeros impares eh: \t%.2f%%\n", porcentagemImpar);


    system("pause");
    return 0;
}
