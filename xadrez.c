#include <stdio.h>

int main() {
    int bispo = 0, torre = 0, rainha = 0;
    printf("#### JOGO DE XADREX ####\n\n");

    // Movimento do Bispo (5 vezes Cima + Direita)
     for ( bispo; bispo < 5; bispo++){
        printf("Bispo ande para cima\n");
        printf("Bispo agora ande para a direita\n");
        printf("\n");
     }
    // Movimento da Torre (5 vezes para a  Direita)
        while (torre < 5){
            printf("Torre ande para a Direita\n");
            torre++;
            printf("\n");
        }
        // Movimento da Rainha (8 vezes para a Esquerda)
        do {
            printf("Rainha ande para a Esquerda\n");
            rainha++;
            printf("\n");

        } while(rainha < 8 );
        
    return 0;
}
