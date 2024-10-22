#include<stdio.h>

int main(){
    float p;
    float al;
    int x;
    printf("Informe seu genero sexual:\n (1)masculino;\n (2)feminino\n ");
    scanf("%d",&x);
    printf("Informe sua altura: ");
    scanf("%f",&al);

    if(x == 1){p = (72.7 * al) - 58;printf("Seu peso ideal eh: %.2f", p);return main();}
    if(x == 2){p = (62.1 * al) - 44.7;printf("Seu peso ideal eh: %.2f", p);return main();}

}