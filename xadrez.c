#include <stdio.h>

int main() {
    int bispo = 0, torre = 0, rainha = 0, cavalo = 0;
    int casas =0;
    int opcao;

    while (1)
    {
        
    printf("#### JOGO DE XADREX ####\n\n");
    printf("Escolha uma peça para mover: \n");
    printf("1. Bispo\n");
    printf("2.Torre\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    printf("5. Sair\n");
    scanf("%d", &opcao);

    
     if (opcao == 1){
    // Movimento do Bispo (5 vezes Cima + Direita)
     for ( bispo; bispo < 5; bispo++){
        printf("Bispo ande para cima\n");
        printf("Bispo agora ande para a direita\n");
        printf("\n");
     }
     
    }else if(opcao == 2){
    // Movimento da Torre (5 vezes para a  Direita)
        while (torre < 5){
            printf("Torre ande para a Direita\n");
            torre++;
            printf("\n");
        }
    }else if(opcao == 3){
        // Movimento da Rainha (8 vezes para a Esquerda)
        do {
            printf("Rainha ande para a Esquerda\n");
            rainha++;
            printf("\n");

        } while(rainha < 8 );
    
    }else if(opcao == 4){
    
    // Movimento do Cavalo (Movimento em L: 2 para baixo e 1 para a esquerda)
        for(cavalo = 1; cavalo <3; cavalo++){
            casas = 0;
        
            while (casas < 2)
            {
               printf("Cavalo ande para baixo\n");
               casas++;
            }
            printf("Cavalo agora ande uma casa para a esquerda\n");
            printf("\n");
            
        }
    }else if(opcao == 5){
        printf("Saindo do jogo!\n");
        break;
     }else{
        printf("Opção invalida, tente novamente.\n");
     }
    }
    return 0;
}
