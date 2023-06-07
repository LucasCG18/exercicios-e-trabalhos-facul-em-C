#include <stdio.h>

int main(){

    system("cls");

    int tamanho, diferentes = 0;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (vetor[i] != vetor[j])
            {
                diferentes++;
            }
            
        }
        if (diferentes == i)
        {
            printf("%d;   ", vetor[i]);
        }
        diferentes = 0;
    }
    
    
    

}