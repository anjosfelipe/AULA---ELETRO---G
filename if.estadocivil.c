#include<stdio.h>

int main(){
    char letra;
    char s = 's';
    char c = 'c';
    char d = 'd';
    char v = 'v';
    
    printf("Digite a letra:");
    scanf("%c",&letra);

    if(letra == s){ printf("Solteiro");}
    if(letra == c){ printf("Casado");}
    if(letra == d){ printf("Divorciado");}
    if(letra == v){ printf("Viuvo");}
    
}