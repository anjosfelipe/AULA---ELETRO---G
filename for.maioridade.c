#include<stdio.h>

int main(){
    int np, ip, c, m = -1;
    
    printf("Infome o np:\n");
    scanf("%d", &np);

    for(c = 1; c <= np; c++){
        printf("Informe a ip:\n");
        scanf("%d", &ip);
        if(ip > m) m = ip;
    }
    printf("A maior idade eh:%d \n", m);
}