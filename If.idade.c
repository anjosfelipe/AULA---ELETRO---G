#include<stdio.h>

int main(){
    int idade;
    printf("Infome a idade:");
    scanf("%d",&idade);

    if (idade <= 10){
        printf("categoria: infantil");
    }

    if (idade > 10 && idade <= 17){
        printf("categoria: juvenil");
    }

    if (idade > 17){
        printf("categoria: senior");
    }
    }