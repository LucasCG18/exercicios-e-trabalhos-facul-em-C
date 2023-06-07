#include <stdio.h>
#include <locale.h>
#include <string.h>

void file(char filename[]){
    char texto[2];
    int resposta;
    FILE *arquivo;
    arquivo= fopen(filename, "r");
    while (fgets(texto, 2, arquivo) != NULL){
        printf("%s", texto);
    }
    printf("\n\nDIGITE 1 PARA RETORNAR!\n");
    scanf("%d", &resposta);
}



int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int lvr_matematica = 10, lvr_prob = 10, lvr_fisica = 10, lvr_quimica = 10, lvr_comp = 10;
    float prc_matematica = 150.00, prc_prob = 100.00, prc_fisica = 160.00, prc_quimica = 160.00, prc_comp = 200.00, caixa = 0.00;
    int escolha;
    while (1)
    {
        printf("********************************// ESCOLHA UMA CATEGORIA //********************************\n\n");
        printf("                                DISPONIVEL   VENDIDO  CODIGO  VALOR\n");
        printf("    MATEMATICA                          %d       %d        1     R$%.2f\n", lvr_matematica, 10 - lvr_matematica, prc_matematica);
        printf("    PROBABILIDADE E ESTATISTICA         %d       %d        2     R$%.2f\n", lvr_prob,10 - lvr_prob, prc_prob);
        printf("    FISICA                              %d       %d        3     R$%.2f\n", lvr_fisica, 10 - lvr_fisica, prc_fisica);
        printf("    QUIMICA                             %d       %d        4     R$%.2f\n", lvr_quimica, 10 - lvr_quimica, prc_quimica);
        printf("    COMPUTACAO                          %d       %d        5     R$%.2f\n", lvr_comp, 10 - lvr_comp, prc_comp);
        printf("\n    6 - COMPRAR LIVROS; 7 - TOTAL VENDIDO E MONTANTE EM CAIXA; 8 - ENCERRAR PROGRAMA\n");

        scanf("%d", &escolha);
        printf("\n\n");

        if (escolha == 1)
        {
            file("matematica.txt");
        }else if (escolha == 2){
            file("prob.txt");
        }else if (escolha == 3){
           file("fisica.txt");
        }else if (escolha == 4){
           file("quimica.txt");
        }else if (escolha == 5){
            file("computacao.txt");
        }else if (escolha == 6){
            int opcao;
            int qntd_livros_desejados_mat = 0, qntd_livros_desejados_prob = 0, qntd_livros_desejados_fisica = 0, qntd_livros_desejados_quimica = 0, qntd_livros_desejados_comp = 0;
            while (1)
            {
                printf("Qual livro deseja comprar?\n");
                printf("1 - MAT; 2 - PROB; 3 - FISICA; 4 - QUIMICA; 5 - COMP\n");
                printf("DESEJA FINALIZAR COMPRA[6] DESEJA CANCELAR E RETORNAR[7]\n");
                scanf("%d", &opcao);

                if (opcao == 1)
                {
                    printf("LIVRO DE MATEMATICA SELECIONADO!\nQNTD DE LIVROS DISPONIVEIS: %d\nPRECO DO LIVRO: R$%.2f\nQUANTOS DESEJA COMPRAR?\n", lvr_matematica, prc_matematica);
                    scanf("%d", &qntd_livros_desejados_mat);
                    if (qntd_livros_desejados_mat > lvr_matematica){
                        qntd_livros_desejados_mat = 0;
                        printf("*********QNTD DESEJADA NAO POSSUIDA*********\n\n");
                    }else{
                        printf("************RESERVADO************\n\n");
                    }
                }else if (opcao == 2)
                {
                    printf("LIVRO DE PROBABILIDADE E ESTATISTICA SELECIONADO!\nQNTD DE LIVROS DISPONIVEIS: %d\nPRECO DO LIVRO: R$%.2f\nQUANTOS DESEJA COMPRAR?\n", lvr_prob, prc_prob);
                    scanf("%d", &qntd_livros_desejados_prob);
                    if (qntd_livros_desejados_prob > lvr_prob){
                        qntd_livros_desejados_prob = 0;
                        printf("*********QNTD DESEJADA NAO POSSUIDA*********\n\n");
                    }else{
                        printf("************RESERVADO************\n\n");
                    }
                }else if (opcao == 3)
                {
                    printf("LIVRO DE FISICA SELECIONADO!\nQNTD DE LIVROS DISPONIVEIS: %d\nPRECO DO LIVRO: R$%.2f\nQUANTOS DESEJA COMPRAR?\n", lvr_fisica, prc_fisica);
                    scanf("%d", &qntd_livros_desejados_fisica);
                    if (qntd_livros_desejados_fisica > lvr_fisica){
                        qntd_livros_desejados_fisica = 0;
                        printf("*********QNTD DESEJADA NAO POSSUIDA*********\n\n");
                    }else{
                        printf("************RESERVADO************\n\n");
                    }
                }else if (opcao == 4)
                {
                    printf("LIVRO DE QUIMICA SELECIONADO!\nQNTD DE LIVROS DISPONIVEIS: %d\nPRECO DO LIVRO: R$%.2f\nQUANTOS DESEJA COMPRAR?\n", lvr_quimica, prc_quimica);
                    scanf("%d", &qntd_livros_desejados_quimica);
                    if (qntd_livros_desejados_quimica > lvr_quimica){
                        qntd_livros_desejados_quimica = 0;
                        printf("*********QNTD DESEJADA NAO POSSUIDA*********\n\n");
                    }else{
                        printf("************RESERVADO************\n\n");
                    }
                }else if (opcao == 5)
                {
                    printf("LIVRO DE COMPUTACAO SELECIONADO!\nQNTD DE LIVROS DISPONIVEIS: %d\nPRECO DO LIVRO: R$%.2f\nQUANTOS DESEJA COMPRAR?\n", lvr_comp, prc_comp);
                    scanf("%d", &qntd_livros_desejados_comp);
                    if (qntd_livros_desejados_comp > lvr_comp){
                        qntd_livros_desejados_comp = 0;
                        printf("*********QNTD DESEJADA NAO POSSUIDA*********\n\n");
                    }else{
                        printf("************RESERVADO************\n\n");
                    }
                }else if (opcao == 6)
                {
                    float preco_compra;
                    preco_compra = qntd_livros_desejados_mat * prc_matematica + qntd_livros_desejados_quimica * prc_quimica + qntd_livros_desejados_fisica * prc_fisica + qntd_livros_desejados_prob * prc_prob + qntd_livros_desejados_comp * prc_comp;
                    caixa += preco_compra;
                    lvr_comp -= qntd_livros_desejados_comp;
                    lvr_quimica -= qntd_livros_desejados_quimica;
                    lvr_fisica -= qntd_livros_desejados_fisica;
                    lvr_prob -= qntd_livros_desejados_prob;
                    lvr_matematica -= qntd_livros_desejados_mat;
                    printf("\n\nPRECO DA COMPRA: R$%.2f\n\nDIGITE 1 PARA RETORNAR\n", preco_compra);
                    scanf("%f", &preco_compra);
                    break;
                }else if (opcao == 7)
                {
                    break;
                }
            }        
        }else if (escolha == 7){
            int espera;
            printf("\n\nTOTAL DE LIVROS VENDIDOS FOI DE: %d, TOTAL DO CAIXA: R$%.2f\nDIGITE 1 PARA RETORNAR\n", (10 - lvr_matematica) + (10 - lvr_prob) + (10 - lvr_fisica) + (10 - lvr_quimica) + (10 - lvr_comp), caixa);
            scanf("%d", &espera);
        }else if (escolha == 8){
            break;
        }
        system("cls");
    }
}