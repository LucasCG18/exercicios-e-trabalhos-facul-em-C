#include <stdio.h>

int main(){

    int vetor1[10], vetor2[10], vetorSoma[10], vetorSubtracao[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Posicao: %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
        printf("Posicao: %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
        //Eu iria fazer os vetores de soma e subtração aqui, para adiantar e facilitar, mas creio que você deseja ver fazer um for dps para isso
    }
    
    for (int i = 0; i < 10; i++)
    {
        vetorSoma[i] = vetor1[i] + vetor2[i];
        vetorSubtracao[i] = vetor1[i] - vetor2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Posicao: %d do vetor Soma: %d\n", i, vetorSoma[i]);
        printf("Posicao: %d do vetor Subtracao: %d\n", i, vetorSubtracao[i]);
    }
    

}