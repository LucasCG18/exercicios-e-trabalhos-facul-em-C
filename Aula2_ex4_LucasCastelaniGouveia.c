#include <stdio.h>

int main(){

    int ano_nasc;

    printf("q ano vc nasceu:");
    scanf("%d", &ano_nasc);
    printf("Qntd anos:%d, anos em 2050:%d", (2023 - ano_nasc), (2050 - ano_nasc));

}