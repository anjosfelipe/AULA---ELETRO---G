#include<stdio.h>

int main(){
    int producao;
    int pdefeitos;
    int porcentagem;
    printf("Informe a producao:");
    scanf("%d",&producao);
    printf("Informe pdefeitos:");
    scanf("%d",&pdefeitos);
   
   porcentagem = producao * 10/100;

   if (pdefeitos >= porcentagem){
    printf("A maquina precisa de manutencao");
    return 0;
   }
   printf("Nao precisa de manutencao");

}