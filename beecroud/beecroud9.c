#include <stdio.h>

int main(){

    float variavel;
    float M[12][12];
    char resposta;
    float conta;
    int aux = 66;
    scanf("%s",&resposta);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f",&variavel);
            M[i][j] = variavel; 
            if (j + i > 11)
            {
                conta = conta + M[i][j];
            }
        }
    }
    if (resposta == 'S')
    {
        printf("%.1f\n",conta);
    }else{
        printf("%.1f\n",conta/aux);
    }
    

}