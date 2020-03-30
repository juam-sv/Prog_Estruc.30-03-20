#include<stdio.h>
#include<stdlib.h>

/*
Uma loja utiliza o código V para compras à vista e o código P para
compras a prazo. Faça um programa em C que recebe o código e o
valor de 10 compras. Utilize for.
Calcule e mostre:
1) O valor total das compras à vista
2) O valor total das compras a prazo
3) O valor total das compras efetuadas

*/
int main()
{  
    //declaração de variaveis
    float comp_prazo, comp_vista, comp_atual;
    char codigo;
    int cont;

    //leitura de valores
    for(cont=1; cont<=10; cont++)
    {
        printf("Deseja comprar á vista ou parcelado? [V/P] ");
        scanf("%s", &codigo);
        printf("Digite o valor da sua compra: R$ ");
        scanf("%f", &comp_atual);
        if(codigo == 'V' || codigo == 'v') // verificação se é a vista 
        {
            comp_vista += comp_atual;
        }
        
        if(codigo == 'P' || codigo == 'p') // verificação se é parcelado
        {
            comp_prazo += comp_atual;
        }
    }

    //impressão dos valores
    printf("Valor das compras a vista: R$ %.2f\n", comp_vista);
    printf("Valor das compras a prazo: R$ %.2f\n", comp_prazo);
    printf("Valor das compras Totais: R$ %.2f\n", comp_prazo + comp_vista);


    return 0;
}