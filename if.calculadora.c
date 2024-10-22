#include<stdio.h>

int main(){
    float x, y;
    int op;
    float r;

    printf("Informe a operacao:\n (1) adicao;\n (2) subtracao;\n (3) multiplicacao;\n (4) divisao;\n");
    scanf("%d",&op);
    printf("Informe o primeiro numero:");
    scanf("%f",&x);
    printf("Informe o segundo numero:");
    scanf("%f",&y);

    if(op == 1){r = x + y; printf("O resultado da soma: %.2f\n",r);return main();}
    if(op == 2){r = x - y; printf("O resultado da subtracao: %.2f\n",r);return main();}
    if(op == 3){r = x * y; printf("O resultado da multiplicacao: %.2f\n",r);return main();}
    if(op == 4){r = x / y; printf("O resultado da divisao: %.2f\n",r);return main();} 
    if (op == 0){
    return 0;}
}