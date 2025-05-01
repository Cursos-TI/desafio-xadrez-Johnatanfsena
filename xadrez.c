#include <stdio.h>
#include <stdlib.h>

void movertorre(int casas){
    if (casas == 0){
        return;
    }
    printf("Torre ande para a esquerda\n");
    movertorre(casas - 1);
}

void moverrainha(int casas1){
    if(casas1 == 0){
        return;
    }
    printf("Rainha ande para esquerda\n");
    moverrainha(casas1 - 1);
}

void moverbispo(int passos){
    if(passos == 0){
        return;
    }
    printf("Bispo ande para cima\n");
    for (int i = 0; i < 1; i++) {
        printf("Bispo agora ande para a direita\n");
    }
    printf("\n");
    moverbispo(passos - 1); // chamada recursiva
}

int main(){
    int casas = 0;
    int opcao;

    while (1){
        printf("#### JOGO DE XADREX ####\n\n");
        printf("Escolha uma peça para mover: \n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1){
            int passos_bispo = 5;
            printf("Movimento do bispo:\n");
            moverbispo(passos_bispo);
            printf("\n");

        } else if(opcao == 2){
            int casastorre = 5;
            printf("Movimento da torre:\n");
            movertorre(casastorre);
            printf("\n");

        } else if(opcao == 3){
            int casasrainha = 8;
            printf("Movimento da Rainha:\n");
            moverrainha(casasrainha);
            printf("\n");

        } else if(opcao == 4){
            for(int cavalo = 1; cavalo < 3; cavalo++){
                casas = 0;
                while (casas < 2){
                    printf("Cavalo ande para baixo\n");
                    casas++;
                }
                printf("Cavalo agora ande uma casa para a esquerda\n");
                printf("\n");
            }

        } else if(opcao == 5){
            printf("Saindo do jogo!\n");
            break;

        } else {
            printf("Opção inválida, tente novamente.\n");
        }
    }

    return 0;
}
