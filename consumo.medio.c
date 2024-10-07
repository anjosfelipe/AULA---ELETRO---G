#include<stdio.h>

int main(){
    float distancia;
    float litros;
    float consumomedio;
    printf("Informe a distancia percorrida em Km:");
    scanf("%f",&distancia);
    printf("Informe quantos litros consumidos:");
    scanf("%f",&litros);
    consumomedio = litros / distancia;
    printf("%f",consumomedio);

}