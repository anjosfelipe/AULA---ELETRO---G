#include<stdio.h>

int main (){
    int x;
    int y;
    int a;
    int r;
    
    printf("Informe os 2 primeiros numeros do seu ano:");
    scanf("%d",&x);
    printf("Informe os 2 ultimos numeros do seu ano:");
    scanf("%d",&y);

    a = (x + y)/5;
    r = (x + y) - (5 * a);

    if(r == 0){printf("timido");}
    if(r == 1){printf("sonhador");}
    if(r == 2){printf("paquerador");}
    if(r == 3){printf("atraente");}
    if(r == 4){printf("Irresistivel");}

}