/*

5. Escrever um programa que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de
N. Mostre a tabuada na forma:
0 x N = N
1 x N = N
2 x N = N
...,
10 x N = N.

*/

#include <stdio.h>

int main()
{
    int valor, i;
    system("cls");
    printf("Digite um valor para ver a sua tabuada:\n");
    scanf("%i", &valor);

    for(i = 0; i <= 10; i++)
    {
        printf("\r%i x %i = \t%i\n", i, valor, i * valor);
    }
    

    system("pause");
    return 0;
}
