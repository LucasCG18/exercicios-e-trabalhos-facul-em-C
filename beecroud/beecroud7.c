#include <stdio.h>

int main(){

    int vetor[20],vetor_parte_1[10], vetor_parte_2[10];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 10; i < 20; i++)
    {
        vetor_parte_2[i - 10] = vetor[i];
        vetor_parte_1[i - 10] = vetor[i - 10];
    }
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = vetor_parte_2[9 - i];
        vetor[i + 10] = vetor_parte_1[9 - i];
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i , vetor[i]);
    }
    
    

}