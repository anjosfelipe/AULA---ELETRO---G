#include<stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    printf("Informe a nota1:");
    scanf("%f",&nota1);

    printf("Infome a nota2:");
    scanf("%f",&nota2);

    printf("Informe a nota3:");
    scanf("%f",&nota3);

    printf("Infome a nota4:");
    scanf("%f",&nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("%2.2f",media);

    if(media >= 7){
        printf("Aprovado!");
    }
    
    if(4 <= media && media < 7){
        printf("Fazer o Exame Final!");
    }

    if(media < 4){
        printf("Reprovado!");
    }

}