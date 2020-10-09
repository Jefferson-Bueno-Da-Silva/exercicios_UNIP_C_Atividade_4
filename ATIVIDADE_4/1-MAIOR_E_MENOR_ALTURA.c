/*

Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e
mostrar:
a. A menor altura do grupo;
b. A maior altura do grupo;

*/

//BIBLIOTECAS USADAS:
#include <stdio.h>


//FUNÇÃO PRINCIPAL
int main()
{   
    //DEFININDO VARIAVEIS
    float maiorAltura = 0, menorAltura = 50, altura = 0;
    int i, op;

    //DISPLAY
    printf("VEJA QUAL E A MAIOR ALTURA ENTRE 15 PESSOAS\n");

    //LAÇO
    for (i = 1; i <= 15; i++)
    {
        printf("Digite a altura do %i aluno\n",i);
        scanf("%f", &altura);

        if(altura > maiorAltura)
        {
            maiorAltura = altura;

        }
        
        if(menorAltura > altura)
        {
            menorAltura = altura;
        }

        printf("Deseja continuar?\n1 - SIM\n2 - NÃO\n");
        scanf("%i", &op);
        if (op == 2)
        {
            i = 16;
        }
    }

    printf("A maior Altura do grupo eh: %.2f\n", maiorAltura);
    printf("A menor altura do grupo eh: %.2f\n", menorAltura);

    system("pause");
    
    return 0;
}
