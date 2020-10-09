/*

7. A sequência de Fibonacci tem papel importante na explicação de fenômenos naturais. Ela é
também bastante utilizada para fins estéticos, pela sua reconhecida harmonia.
Exemplo disso foi sua utilização na construção do Partenon, em Atenas.
A sequência dá-se inicialmente por dois números 1. A partir do terceiro elemento usa-se a
expressão: elementon = elementon-1 + elementon-2.
Exemplo de sequência: 1, 1, 2, 3, 5, 8.
Construa um programa que imprima na tela os n primeiros elementos da sequência de Fibonacci,
onde n é informado pelo usuário.

*/

#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS
    int num, f1 = 0, 
        f2 = 1, 
        f3,
        i = 0;

    int aberto = 1;

    //ENTADA DE DADOS
    printf("Digite a quandidade de numeros da sequencia Fibonacci: \n ");
    scanf("%i", &num);

    if (num < 0)
    {
        printf("O valor digitado é incorreto...\n");
    }
    
    printf("0 1");
    for(i = 0; i < num; i++)
    {
        
        f3 = f2 + f1;
        printf(" %i", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");
    system("pause");
    return 0;
}
