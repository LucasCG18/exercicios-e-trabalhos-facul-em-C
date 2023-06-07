#include <stdio.h>

int main(){

    int m,n,p, aux;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    int A[m][n], B[n][p], C[m][p];
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++){
            printf("Digite o valor da linha: %d, coluna: %d, da matrize A\n", i, j);
            scanf("%d",&A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++){
            printf("Digite o valor da linha: %d, coluna: %d, da matrize B\n", i, j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
		for(int j = 0; j < p; j++) {
			for(int x = 0; x < n; x++) {
				aux = aux + A[i][x] * B[x][j];
			}

			C[i][j] = aux;
			aux = 0;
		}
	}
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < p; j++) {
			printf("%3d", C[i][j]);
		}
		printf("\n\n");
	}

    
}