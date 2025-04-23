#include <stdio.h>

int main(){

    int movimentoTorre = 1;
    int movimentoBispo = 1;
    
    printf("***JOGO DE XADREZ***\n");

    printf("Movimentação da Torre\n");

    while (movimentoTorre <= 5)
    {
        printf("Movimento %d: Torre vai para a direita\n", movimentoTorre);
        movimentoTorre++;
    }
    
    printf("Movimentação do Bispo\n");

    do{
        printf("Movimento %d: Bispo vai Cima, Direita\n", movimentoBispo);
        movimentoBispo++;
    }   while (movimentoBispo <= 5);
    
    printf("Movimentação da Rainha\n");
    
    for (int movimentoRainha = 1; movimentoRainha <=8; movimentoRainha++)
    {
        printf("Movimento %d: Rainha vai para a esquerda\n", movimentoRainha);
    }
    
    return 0;

}