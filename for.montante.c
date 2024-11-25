#include<stdio.h>

int main(){
    float c, j;
    int p, x;

    printf("Infome o c:\n");
    scanf("%f", &c);
    printf("Infome o j:\n");
    scanf("%f", &j);
    printf("Infome o p:\n");
    scanf("%d", &p);

    for(x = 0; x <= p; x++){
        printf("mes %d: R$", x);
        printf(" %2.2f\n", c);
        c = (1 + j/100)*c;
    }
    return 0;
}