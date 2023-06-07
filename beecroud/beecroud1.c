#include <stdio.h>

int main(){
    float produtos[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int produto, qntd;
    scanf("%d %d", &produto, &qntd);
    printf("Total: R$ %.2f", produtos[produto - 1] * qntd);
}