#include <stdio.h>

int main(){
    int pontos_jogador1 = 0, pontos_jogador2 = 0;
    for (int i = 0; i < 10; i++)
    {
        int moeda = rand() %2;
        switch (moeda)
        {
            case 0:
                printf("Jogador 1, CARA!\n");
                pontos_jogador1 += 1;
                break;
            case 1:
                printf("Jogador 2, COROA!\n");
                pontos_jogador2 += 1;
                break;
        }
    }
    if (pontos_jogador1 > pontos_jogador2) 
    {
        printf("Jogador1 venceu! com %d pontos!\n", pontos_jogador1);
    }else if (pontos_jogador2 > pontos_jogador1)
    {
        printf("Jogador2 venceu! com %d pontos!\n", pontos_jogador2);
    }else{
        printf("empate");
    }
    
       
}