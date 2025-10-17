#include <stdio.h>


int main(){

    int peca;

    printf("Desafio de Xadrez - MateCheck\n");
    printf("Qual peça você gostaria de mover?\n");

    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    scanf("%d", &peca);

    switch (peca){
        case 1:
            printf("Voce escolheu o Bispo!\n");
            int i, j;
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

        default:
        printf("Opção inválida!\n");
            break;
    }

}