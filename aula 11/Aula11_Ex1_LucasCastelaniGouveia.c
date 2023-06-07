#include <stdio.h>

int main(){

    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int A[m][n], B[m][n], C[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite o valor da linha: %d, coluna: %d, das matrizes A e B respectivamente\n", i, j);
            scanf("%d",&A[i][j]);
            scanf("%d",&B[i][j]);
            /*
            Aqui será feito de uma maneira que eu creio que n é a que a prof gostaria, ent vou deixar comentado
            C[i][j] = A[i][j] + B[i][j]
            */
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d",C[i][j]);
            if (j == n - 1)
            {
                printf("\n");
            }
        }
    }
}