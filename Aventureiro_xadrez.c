#include <stdio.h>


int main(){

    int peca;
    int movimento;
    

    printf("Desafio de Xadrez - MateCheck\n");
    printf("Qual peça você gostaria de mover?\n");

    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");

    scanf("%d", &peca);

    switch (peca){
        case 1:
            printf("Voce escolheu o Bispo!\n");
            int i;
            // Movimentação do Bispo (diagonal)
            printf("Movimentacao do Bispo:\n");
            for(i = 1; i <= 5; i++){
                printf("Cima, Direita\n");
            } 
        break;

        case 2:
            printf("Voce escolheu a Torre!\n");
            // Movimentação da Torre (horizontal para a direita)
            printf("\nMovimentacao da Torre:\n");
            for(i = 1; i <=5 ; i++){
                printf("Direita\n");
            }
        break;

        case 3:
            printf("Você escolheu a Rainha!\n");
            // Movimentação da Rainha (horizontal para a esquerda)
            printf("\nMovimentação da Rainha:\n");
            for(i = 1; i <= 8; i++){
                printf("Esquerda\n");
            }
        break;

        case 4:


            printf("Você escolheu o Cavalo!\n");
            // Movimentação do Cavalo (em L)
            printf("\nMovimentacao do Cavalo:\n");
            printf("Qual movimento você quer que ele faca\n");
            printf("1 - Duas casas para frente e uma para direita\n");
            printf("2 - Duas casas para frente e uma para esquerda\n");
            scanf("%d", &movimento);
            switch (movimento){
                case 1:
                    for(i = 1; i <= 2; i++){
                        printf("Cima\n");
                    }
                    printf("Direita\n");
                break;

                case 2:
                    for(i = 1; i <= 2; i++){
                        printf("Frente\n");
                    }
                    printf("Esquerda\n");
                break;

            default:
                    printf("Opção inválida!\n");
                break;
            }

            
        default:
        printf("Opção inválida!\n");
            break;
    }

}