#include<stdio.h>

int main(){
    float comprimento;
    float largura;
    float precodometro;
    float custo;
    printf("Informe o comprimento:");
    scanf("%f",&comprimento);
    printf("Informe a largura:");
    scanf("%f",&largura);
    printf("Informe o preço do metro");
    scanf("%f",&precodometro);
    custo = precodometro * (comprimento * largura);
    printf("%f",custo);

}