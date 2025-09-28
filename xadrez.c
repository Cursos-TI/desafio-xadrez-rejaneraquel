#include <stdio.h>
void moverBispo(int casas) {
    while (casas > 0)
    {
        printf("Cima\n");
        printf("Esquerda\n");
        moverBispo(casas - 1);
        break;
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
        }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}


int main() {
    
    printf("##Bispo##\n");
    moverBispo(3);

    printf("\n");
    printf("##Torre##\n");
    moverTorre(3);

    printf("\n");
    printf("\n##Rainha##\n");
    moverRainha(7);

    printf("\n");
    printf("##Cavalo##\n");

    int cavalo = 1; // Cavalo = 1 pois no decremento ficará zero, para o for!

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
