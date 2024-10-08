#include<stdio.h>
#include<math.h>

int main(){
    float capital;
    float taxadejuros;
    float meses;
    float montante;
    printf("Informe o capital:");
    scanf("%f",&capital);
    printf("Informe a taxa de juros:");
    scanf("%f",&taxadejuros);
    printf("Informe meses:");
    scanf("%f",&meses);
    montante = capital * pow((1 + taxadejuros / 100), meses);
    printf("%2.2f",montante);

}