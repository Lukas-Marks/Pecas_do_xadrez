#include <stdio.h>

void moverBispo(int passos){
    if(passos <= 0){
        return;
    }
    printf("Cima, Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos){
    if(passos <= 0){
        return;
    }
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos){
    if(passos <= 0){
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main(){

    int peca;
    int movimento;
    int i;
    

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
            moverBispo(5);
        break;

        case 2:
            printf("Voce escolheu a Torre!\n");
            moverTorre(5);
        break;

        case 3:
            printf("Voce escolheu a Rainha!\n");
            moverRainha(8);
        break;

        case 4:
            printf("Voce escolheu o Cavalo!\n");
            // Movimentação do Cavalo (em L)
            printf("\nMovimentacao do Cavalo:\n");
            printf("Qual movimento você quer que ele faca\n");
            printf("1 - Duas casas para frente e uma para direita\n");
            printf("2 - Duas casas para frente e uma para esquerda\n");
            scanf("%d", &movimento);
            if (movimento == 1){
                    for(i = 1; i <= 2; i++){
                        printf("Cima\n");
                    }
                    printf("Direita\n");
            }
            else if (movimento == 2){
                    for(i = 1; i <= 2; i++){
                        printf("Cima\n");
                    }
                    printf("Esquerda\n");
            } else {
                    printf("Opcao invalida!\n");
            }
        
        break; 
        
        default:
        printf("Opcao invalida!\n");
            break;
    } 
    return 0;   
}