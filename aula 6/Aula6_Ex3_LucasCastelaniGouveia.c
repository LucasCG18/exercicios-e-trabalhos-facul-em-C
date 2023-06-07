#include <stdio.h>

int main(){
    float massa_inicial;
    float massa_final;
    int sec = 0;
    int min = 0;
    int hora = 0;
    scanf("%f", &massa_inicial);
    massa_final = massa_inicial;
    while(massa_final >= 1.0){
        massa_final = massa_final / 2;
        sec += 30;
    }
    //printf(sec);
    if (sec >= 3600)
    {
        hora = sec / 3600;
        sec -= hora * 3600;
    }
    if (sec >= 60)
    {
        min = sec / 60;
        sec -= min * 60;
    }
    printf("Para a massa de: %.2f chegar a massa de: %.2f levou: %d:%d:%d\n",massa_inicial,massa_final, hora, min, sec);
}