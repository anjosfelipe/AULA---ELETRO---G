#include<stdio.h>

int main(){
    int quantidadedecopias;
    float custo;
    printf("Informar a quantidade de copias:");
    scanf("%d",&quantidadedecopias);

    if(quantidadedecopias <= 100){
        custo = 0.25 * quantidadedecopias;
        printf("valor a ser pago: %2.2f", custo);
    }

    if(quantidadedecopias > 100){
         custo = 0.2 * quantidadedecopias;
        printf("valor a ser pago: %2.2f", custo);
    }

}