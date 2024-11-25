#include<stdio.h>

int main(){
    int e, somaA = 0, somaB = 0, somaC = 0, somaN = 0, x;
    char v; 

    printf("Informe o numero de e:\n");
    scanf("%d", &e);
    
    for(x = 1; x <= e; x++) {
        printf("%d voto?\nCandidatos: A; B; C.", x);
        scanf("%*c%c", &v);
        if(v == 'A'){
        somaA++;
        }
        else if (v == 'B'){
        somaB++;   
        }
        else if (v == 'C'){
        somaC++;   
        }
        else{
        somaN++;   
        }
    }
    printf("\nResultado:\n\n");
    printf("A: %d\n", somaA);
    printf("B: %d\n", somaB);
    printf("C: %d\n", somaC);
    printf("Nulo: %d\n", somaN);
return 0;
}