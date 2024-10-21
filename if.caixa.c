#include<stdio.h>

int main(){
    int numero;
   
    printf("Digite o numero:");
    scanf("%d",&numero);

    if(numero == 1){ printf("Saldo");}
    if(numero == 2){ printf("extrato");}
    if(numero == 3){ printf("saque");}
    if(numero == 4){ printf("sair");}
    
}