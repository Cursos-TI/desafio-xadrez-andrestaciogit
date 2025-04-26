#include <stdio.h>

void movimentoTorre(int casas){
    if (casas > 0) {
        printf("Torre vai para a direita\n");
        movimentoTorre(casas - 1);
    }
}
void movimentoBispo(int casas){
    if (casas > 0) {
        printf("Bispo vai Cima, Direita\n");
        movimentoBispo(casas - 1);
    }
}
void movimentoRainha(int casas){
    if (casas > 0) {
        printf("Rainha vai para a esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main(){
    printf("Movimentação da Torre\n");
    movimentoTorre(5);

    printf("\n");

    printf("Movimentação do Bispo\n");
    movimentoBispo(5);

    printf("\n");

    printf("Movimentação da Rainha\n");
    movimentoRainha(8);

    printf("\n");

    printf("Movimentação do Cavalo\n");

    for (int movimentoCavalo = 1; movimentoCavalo <=2; movimentoCavalo++){
        printf("Cavalo vai para cima\n", movimentoCavalo);
        
        if (movimentoCavalo ==2) {
            for (int movimentoCavalo2 = 1; movimentoCavalo2 <=1; movimentoCavalo2++){
                printf("Cavalo vai para a direita\n");
            }
        }
    }

    return 0;

}