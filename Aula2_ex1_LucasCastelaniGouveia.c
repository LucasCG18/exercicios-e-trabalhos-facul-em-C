#include <stdio.h>

int main(){

    float dolar_atual;
    float qntd_dolar;

    scanf("%f", &dolar_atual);
    scanf("%f", &qntd_dolar);
    printf("RS: %.2f", dolar_atual* qntd_dolar);
}