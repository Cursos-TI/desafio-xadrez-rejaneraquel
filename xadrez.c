#include <stdio.h>
/*
Código de exemplo
    for (int i = 0; i <5; i++) {
    printf("Direita\n");     -> imprime a direção do movimento;
    }
*/
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1;
    // Implementação de Movimentação do Bispo (Diagonal)

    printf("##Bispo##\n");
    while (bispo <= 3)
    {
        bispo++;
        printf("Cima\n");
        printf("Esquerda\n");
    }

    // Implementação de Movimentação da Torre (Direita)
    printf("##Torre##\n");
    // Simulando 4 casas;    
        for (int torre = 1; torre < 4; torre++)
        {
            printf("Direita\n");
        }
    // Implementação de Movimentação da Rainha
    printf("##Rainha##\n");
    int rainha = 2;
    printf("Movimento inicial: %d\n", rainha);
    do
    {
        rainha++; 
        printf("Esquerda\n");
        } while (rainha <= 7);

        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        // Nível Aventureiro - Movimentação do Cavalo
        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // Um loop pode representar a movimentação horizontal e outro vertical.

        // Nível Mestre - Funções Recursivas e Loops Aninhados
        // Sugestão: Substitua as movimentações das peças por funções recursivas.
        // Exemplo: Crie uma função recursiva para o movimento do Bispo.

        // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
        // Inclua o uso de continue e break dentro dos loops.

        return 0;
}
