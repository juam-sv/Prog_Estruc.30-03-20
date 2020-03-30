#include<stdio.h>
#include<stdlib.h>

/*Faça um programa em C que mostra a tabuada para qualquer número
inteiro n lido pelo teclado (considerar a tabuada de multiplicar de 1 a
10). Utilize for.
O programa fica repetindo, pedindo um número e mostrando a sua
tabuada até que o número lido seja zero, então encerrar o programa.
*/

int main()
{  
    //declaração de variaveis
    int n, cont;

    while(1 == 1)
    {
        //leitura de valores
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
        //estrutura de validação para saida do loop
        if(n==0){ 
            return 0;
        }

        //calculo dos valores
        printf("Tabuada do numero %d\n", n);
        for(cont=1; cont <= 10; cont++)
        {
            printf("%d * %d = %d\n", n, cont, (n*cont));
        }
    }

    return 0;
}