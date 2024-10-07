#include<stdio.h>

int main(){
    float imc;
    float altura;
    float peso;
    printf("Informe seu peso:");
    scanf("%f",&peso);
    printf("Informe sua altura:");
    scanf("%f",&altura);
    imc = peso / (altura * altura);
    printf("%2.2f",imc);
}