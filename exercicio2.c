#include<stdio.h>
#include<stdlib.h>

/*
Escreva um programa em C que gera números entre 1000 e 1999 e
mostra somente aqueles que divididos por 11 dão resto 5. Utilize for.
*/

int main()
{  
    //declaração de variaveis
    int cont;

    //calculo dos valores 
    printf("Listagem dos restos das divisões por 11 iguais a 5: \n");
    for(cont = 1000; cont <= 1999; cont++)
    {
        if(cont%11==5) // verificação da condição
        {
            printf("%d - ", cont);
        }
    }

    return 0;
}