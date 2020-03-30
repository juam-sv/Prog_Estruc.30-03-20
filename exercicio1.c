#include<stdio.h>
#include<stdlib.h>

/*
Exercício 01
Faça um programa em C que leia pelo teclado um número n inteiro e
mostre os n primeiros números pares e depois os n primeiros
números ímpares. Utilize for.
*/

int main()
{  
    //declaração de variaveis
    int num, cont;


    //leitura de valores
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //calculo dos valores pares
    printf("Numeros Pares: ");
    for(cont=0; cont <= num; cont++)
    {
        if(cont%2==0) // verificação se é par
        {
            printf("%d - ", cont);
        }
    }

    //Calculo dos valores impares
    printf("\nNumeros Impares: ");
    for(cont=0; cont <= num; cont++)
    {
        if(cont%2!=0) // verificação se é impar
        {
            printf("%d - ", cont);
        }
    }

    printf("\nFim");

    return 0;
}