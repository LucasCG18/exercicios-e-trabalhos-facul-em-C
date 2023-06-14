#include <stdio.h>

int main(){
    int linha, coluna, numero = 0, linha_n, coluna_n;
    printf("Digite as linha que deseja ter, digite as colunas de deseja ter, separadas por um espaco\n");
    scanf("%d %d",&linha, &coluna);
    int matriz[linha][coluna];
    for (int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++){
            printf("digite o numerod a linha: %d, coluna: %d\n", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }
    do
    {
        numero = 0;
        linha_n = 0;
        coluna_n = 0;
        for (int i = 0; i < linha; i++)
        {
            for(int j = 0; j < coluna; j++){
                if (matriz[i][j] > numero)
                {
                    numero = matriz[i][j];
                    linha_n = i;
                    coluna_n = j;
                }
            }
        }
        matriz[linha_n][coluna_n] = 0;
        if (numero != 0)
        {
            printf("Elemento: %d, linha: %d, coluna: %d\n", numero, linha_n, coluna_n);
        }
        
    } while (numero > 0);
    
    
}