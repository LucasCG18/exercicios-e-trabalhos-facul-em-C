#include <stdio.h>
void bubble_sort (int vetor[], int n) {
    int k, j, aux;
    for (k = n - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
int main(){

    int qntd_vezes;
    scanf("%d",&qntd_vezes);
    for (int i = 0; i < qntd_vezes; i++)
    {
        int contador = 0;
        int n_estudantes;
        scanf("%d",&n_estudantes);
        int notas[n_estudantes];
        int notas_arrumadas[n_estudantes];
        for (int i = n_estudantes; i > 0; i--)
        {
            scanf("%d",&notas[i]);
            notas_arrumadas[i] = notas[i];
        }
        bubble_sort(notas_arrumadas,n_estudantes);
        for (int i = 0; i < n_estudantes; i++)
        {
            if (notas[i] == notas_arrumadas[i])
            {
                contador++;
            }
        }
        printf("%d",contador);
    }
    

}