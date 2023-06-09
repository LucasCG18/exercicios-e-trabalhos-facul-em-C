#include <stdio.h>
#include <stdlib.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"


void printar_matrizes_alocar_barco(int jogador[][10]){
    for (int i = 0; i < 10; i++)
    {
        if (i == 0){
            printf(RESET"           0  1  2  3  4  5  6  7  8  9\n\n");
        }
        printf("%d        ",i);
        for(int j = 0; j < 10; j++)
        {
            printf(RESET"%3d", jogador[i][j]);
        }
        printf("\n");
    }
}
void printar_matrizes_jogo(int jogador[][10]){
    for (int i = 0; i < 10; i++)
    {
        if (i == 0){
            printf(RESET"           0  1  2  3  4  5  6  7  8  9\n\n");
        }
        printf(RESET"%d        ",i);
        for(int j = 0; j < 10; j++)
        {
            if (jogador[i][j] == 1)
            {
                printf(RESET "%3d", 0);
            }else if (jogador[i][j] == 0)
            {
                printf(RESET "%3d", jogador[i][j]);
            }else if (jogador[i][j] == -1)
            {
                printf(RED "%3d", jogador[i][j]);
            }else if (jogador[i][j] == 2)
            {
                printf(GREEN "%3d", jogador[i][j]);
            }
        }
        printf("\n");
    }
}
int verificar_barco(int jogador[][10]){
    int barco = 0;
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if (jogador[i][j] == 1)
            {
                barco = jogador[i][j];
            }
        }
    }
    return barco;
}
void atacar(int ataque[], int jogador[][10]){
    if (jogador[ataque[0]][ataque[1]] == 1)
    {
        printf(RESET"Voce acertou um barcou ou pedaco de barco, parabens!\n");
        jogador[ataque[0]][ataque[1]] = 2;
    }else if (jogador[ataque[0]][ataque[1]] == 0)
    {
        printf(RESET"Acertou a agua :(\n");
        jogador[ataque[0]][ataque[1]] = -1;
    }
    printar_matrizes_jogo(jogador);
}

//fazer função para o ha_barco e talvez do colocar barco
int main(){
    system("color 0f");

    int switchCase, jogador1[10][10], jogador2[10][10];
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            jogador1[i][j] = 0;
            jogador2[i][j] = 0;
        }
    }
    
    
    do
    {
        printf(RESET"Escolha uma opcao:\n1 - alocar navios\n2 - iniciar jogo\n3 - fechar jogo\n");
        scanf("%d",&switchCase);
        switch (switchCase)
        {
        case 1:
            for (int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    jogador1[i][j] = 0;
                    jogador2[i][j] = 0;
                }
            }
            for(int contador = 1; contador < 3; contador++){
                int porta_avioes = 1, navios_tanque = 2, contratorpedos = 3, submarinos = 4;
                int qntd_porta_avioes = 1, qntd_navios_tanque = 2, qntd_contratorpedos = 3, qntd_submarinos = 4;
                int escolha;
                printf(RESET"Escolha:\n1 - Alocar navios para jogador %d\n0 - fechar alocacao de navios\n", contador); 
                scanf("%d",&escolha);
                while (escolha == 1)
                {
                    
                    int navios_escolhidos, posicao[2], direcao, vertical, horizontal, ha_barco = 0;
                    printf("Escolha o que deseja instalar:\n4 - porta avioes(OCUPA 4 ESPACOS)(ATUALMENTE VOCE TEM:%d)\n3 - navios tanque(OCUPA 3 ESPACOS)(ATUALMENTE VOCE TEM:%d)\n2 - contratorpedos(OCUPA 2 ESPACOS)(ATUALMENTE VOCE TEM:%d)\n1 - submarinos(OCUPA 1 ESPACO)(ATUALMENTE VOCE TEM:%d)\n", qntd_porta_avioes, qntd_navios_tanque, qntd_contratorpedos, qntd_submarinos);
                    scanf("%d",&navios_escolhidos);
                    if ((navios_escolhidos <=4 && navios_escolhidos >=1) && ((navios_escolhidos == 1 && qntd_submarinos > 0) || (navios_escolhidos == 2 && qntd_contratorpedos > 0) || (navios_escolhidos == 3 && qntd_navios_tanque > 0) || (navios_escolhidos == 4 && qntd_porta_avioes >0)))
                    {
                        if (navios_escolhidos == 1){
                            qntd_submarinos--;
                        }else if (navios_escolhidos == 2){
                            qntd_contratorpedos--;
                        }else if (navios_escolhidos == 3){
                            qntd_navios_tanque--;
                        }else if (navios_escolhidos == 4){
                            qntd_porta_avioes--;
                        }
                        printf("Deseja colocar na vertical(1)(ocupa os espacos para baixo do escolhido), ou na horizontal(2)(ocupa os espacos para a direita do escolhido)\n");
                        scanf("%d", &direcao);
                        if (direcao == 1)
                        {
                            vertical = navios_escolhidos;
                            horizontal = 0;
                        }else{
                            vertical = 0;
                            horizontal = navios_escolhidos;
                        }
                        system("cls");
                        if (contador == 1)
                            printar_matrizes_alocar_barco(jogador1);
                        else
                            printar_matrizes_alocar_barco(jogador2);
                    
                    
                        printf("Digite a posicao, dentro de uma matriz 10 por 10, lembrando que vai de 0 a 9, da linha *espaco* coluna\n");
                        scanf("%d %d", &posicao[0], &posicao[1]);
                        do
                        {
                            ha_barco = 0;
                            if (contador == 1)
                            {
                                if (direcao == 1)
                                {
                                    for (int i = posicao[0]; i < posicao[0] + navios_escolhidos; i++)
                                    {
                                        if (jogador1[i][posicao[1]] > ha_barco)
                                        {
                                            ha_barco = jogador1[i][posicao[1]];
                                        }
                                    }
                                    
                                }else
                                {
                                    for (int j = posicao[1]; j < posicao[1] + navios_escolhidos; j++)
                                    {
                                        if (jogador1[posicao[0]][j] > ha_barco)
                                        {
                                            ha_barco = jogador1[posicao[0]][j];
                                        }
                                    }
                                }
                                
                                
                            }else{
                                if (direcao == 1)
                                {
                                    for (int i = posicao[0]; i < posicao[0] + navios_escolhidos; i++)
                                    {
                                        if (jogador2[i][posicao[1]] > ha_barco)
                                        {
                                            ha_barco = jogador2[i][posicao[1]];
                                        }
                                    }
                                    
                                }else
                                {
                                    for (int j = posicao[1]; j < posicao[1] + navios_escolhidos; j++)
                                    {
                                        if (jogador2[posicao[0]][j] > ha_barco)
                                        {
                                            ha_barco = jogador2[posicao[0]][j];
                                        }
                                    }
                                }
                            }
                            if ((posicao[0] + vertical - 1 > 9 || posicao[1] + horizontal - 1 > 9) || ha_barco > 0)
                            {
                                printf("posicao escolhida E invalida, digite novamente:\n");
                                scanf("%d %d", &posicao[0], &posicao[1]);
                            }
                            
                        } while ((posicao[0] + vertical - 1 > 9 || posicao[1] + horizontal - 1 > 9) || ha_barco > 0);
                        if (contador == 1)
                        {
                            if (direcao == 1)
                            {
                                for (int i = posicao[0]; i < posicao[0] + navios_escolhidos; i++)
                                {
                                    jogador1[i][posicao[1]] = 1;
                                }
                                
                            }else
                            {
                                for (int j = posicao[1]; j < posicao[1] + navios_escolhidos; j++)
                                {
                                    jogador1[posicao[0]][j] = 1;
                                }
                            }
                            
                            
                        }else{
                            if (direcao == 1)
                            {
                                for (int i = posicao[0]; i < posicao[0] + navios_escolhidos; i++)
                                {
                                    jogador2[i][posicao[1]] = 1;
                                }
                                
                            }else
                            { 
                                for (int j = posicao[1]; j < posicao[1] + navios_escolhidos; j++)
                                {
                                    jogador2[posicao[0]][j] = 1;
                                }
                            }
                        }       
                        printf("Deseja colocar mais navios para o mesmo jogador(1)\nSe deseja continuar(0)\n");
                        scanf("%d",&escolha);
                    }else{
                        int nada;
                        printf("Navio escolhido nao existe ou nAo possui mais estoque\n digite qlqr coisa para continuar\n"); 
                        scanf("%d", &nada);
                    }
                }
            }  
            break;
        case 2:
            system("cls");
            printf("Voce inciou o jogo!");
            while (verificar_barco(jogador1) == 1 && verificar_barco(jogador2) == 1)
            {
                int ataque[2];
                printf(RESET"Vez do jogador 1 atacar o jogador 2:\n\n\n");
                printar_matrizes_jogo(jogador2);
                printf(RESET"Escolha as posicoes que deseja fazer o ataque! linha *espaco* coluna\n");
                scanf("%d %d", &ataque[0], &ataque[1]);
                atacar(ataque, jogador2);
                printf(RESET"Vez do jogador 2 atacar o jogador 1:\n\n\n");
                printar_matrizes_jogo(jogador1);
                printf(RESET"Escolha as posicoes que deseja fazer o ataque! linha *espaco* coluna\n");
                scanf("%d %d", &ataque[0], &ataque[1]);
                atacar(ataque, jogador1);

            }
            if (verificar_barco(jogador1) == 1)
            {
                printf(RESET"Jogador 1 ganhou!!!!\n");
            }else{
                printf(RESET"Jogador 2 ganhou!!!!\n");
            }
            break;
        case 3:
            break;
        } 
    } while (switchCase != 3);
    
    

}