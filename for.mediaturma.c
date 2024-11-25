#include<stdio.h>

int main(){
    int na, n;
    float nota, media, soma = 0;

    printf("informe o na:\n");
    scanf("%d", &na);

    for(n = 1; n <= na; n++){
        printf("informe a nota:\n");
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / na;
    printf("A media eh:\n %f", media);
}