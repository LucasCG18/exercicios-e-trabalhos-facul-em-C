#include <stdio.h>

int main(){

    system("cls");
    float temp[7], menorTemp, maiorTemp, mediaTemp = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%f", &temp[i]);
        if (i == 0)
        {
            menorTemp = temp[i];
            maiorTemp = temp[i];
        }else if (menorTemp > temp[i])
        {
            menorTemp = temp[i];
        }else if (maiorTemp < temp[i])
        {
            maiorTemp = temp[i];
        }
        mediaTemp += temp[i];
    }
    printf("Maior temp: %.2f\nMenor temp: %.2f\nMedia temp: %.2f\n", maiorTemp, menorTemp, mediaTemp / 7);
    

}