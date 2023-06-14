#include <stdio.h>

void pegar_numeros(char *vetor_numero[]){
    char numero;
    int contador = 0;
    do
    {
        scanf("%c",&numero);
        vetor_numero[contador] = numero;
        contador++;
    } while (numero != '0');
}
void printar_numeros(char *vetor_numero[]){
    int numero_ate_0 = 0;
    printf("Valor inicial de N:\n");
    for (int i = 0; vetor_numero[i] != '0'; i++){
        printf("%c",vetor_numero[i]);
    }
    printf("\n");
    printf("Primeiro digito: %c\n",vetor_numero[0]);
    for (int i = 0; vetor_numero[i] != '0'; i++){
        if (vetor_numero[i + 1] == '0')
        {
            printf("O ultimo numero de N e: %c\n",vetor_numero[i - 1]);
            numero_ate_0 = i;
        }
    }
    printf("Numero sem o primeiro e o ultimo: ");
    for (int i = 1; i < numero_ate_0 - 1; i++)
    {
        printf("%c",vetor_numero[i]);
    }
    printf("\n");
}

int main(){
    char vetor[100];
    pegar_numeros(vetor);
    printar_numeros(vetor);
}