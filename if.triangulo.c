#include<stdio.h>

int main(){
    int x;
    int y;
    int z;

    printf("Informe x:");
    scanf("%d",&x);
    printf("Informe y:");
    scanf("%d",&y);
    printf("Informe z:");
    scanf("%d",&z);

    if (x == y && y == z){ printf("O triangulo sera: equilatero");}

    if (x == y && y != z && x != z){ printf("O triangulo sera: isosceles");}
    
    if (x == z && y != z && x != y){ printf("O triangulo sera: isosceles");}

    if (z == y && y != x && x != z){ printf("O triangulo sera: isosceles");}

    if (x != y && y != z && x != z){ printf("O triangulo sera: escaleno");}
}