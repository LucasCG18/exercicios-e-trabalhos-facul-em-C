#include <stdio.h>

int main(){

    int A;
    int B;
    int troca;

    printf("foi usado variaveis para numeros inteiros\n");

    printf("digite o primeiro numero inteiro:");
    scanf("%d", &A);
    printf("digite o sugundo numero inteiro:");
    scanf("%d", &B);
    troca = A;
    A = B;
    B = troca;
    printf("ATUAL VALOR DA VARIAVEL A: %d, ATUAL VALOR DA VARIAVEL B: %d", A,B);



}