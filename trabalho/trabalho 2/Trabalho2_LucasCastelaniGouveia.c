#include <stdio.h>

int main(){

    int switchCase, jogador1[10][10], jogador2[10][10];
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            jogador1[i][j] = 0;
            jogador2[i][j] = 0;
        }
    }
    
    printf("Escolha uma opcao:\n1 - alocar navios\n2 - iniciar jogo\n3 - fechar jogo\n");
    scanf("%d",&switchCase);
    
    switch (switchCase)
    {
    case 1:
        for(int contador = 1; contador < 3; contador++){
            int porta_avioes = 1, navios_tanque = 2, contratorpedos = 3, submarinos = 4;
            int qntd_porta_avioes = 1, qntd_navios_tanque = 2, qntd_contratorpedos = 3, qntd_submarinos = 4;
            int escolha;
            printf("Escolha:\n1 - Alocar navios para jogador %d\n0 - fechar alocacao de navios\n", contador); 
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
                            printf("posicao escolhida é invalida, digite novamente:\n");
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
                    printf("Navio escolhido nao existe ou não possui mais estoque UwU\n digite qlqr coisa para continuar\n"); 
                    scanf("%d", &nada);
                }
                
                
            }
            for (int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    printf("%3d", jogador1[i][j]);
                }
                printf("\n");
            }
        }
        
        break;
    
    case 2:

        break;

    case 3:

        break;
    }

}