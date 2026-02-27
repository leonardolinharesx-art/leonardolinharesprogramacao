#include <stdio.h>

/**
 * Desafio: Posicionando Navios no Tabuleiro (Nível Novato)
 * Objetivo: Representar um tabuleiro 10x10, posicionar dois navios (tamanho 3)
 * e exibir a matriz resultante no console.
 */

int main() {
    // 1. Definição do Tabuleiro 10x10
    // Usamos int para representar: 0 = Água, 3 = Navio
    int tabuleiro[10][10];

    // 2. Inicialização do Tabuleiro com 0 (Água)
    // Utilizamos loops aninhados para percorrer cada linha (i) e coluna (j)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 3. Posicionamento do Navio Horizontal
    // Escolhemos uma coordenada inicial: Linha 2, Coluna 1
    // O navio tem tamanho 3, então ocupará (2,1), (2,2) e (2,3)
    int linhaHorizontal = 2;
    int colInicialHorizontal = 1;
    
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaHorizontal][colInicialHorizontal + j] = 3;
    }

    // 4. Posicionamento do Navio Vertical
    // Escolhemos uma coordenada inicial: Linha 5, Coluna 7
    // O navio tem tamanho 3, então ocupará (5,7), (6,7) e (7,7)
    int linhaInicialVertical = 5;
    int colunaVertical = 7;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialVertical + i][colunaVertical] = 3;
    }

    // 5. Exibição do Tabuleiro no Console
    printf("--- TABULEIRO DE BATALHA NAVAL ---\n\n");

    // Loop externo para as linhas
    for (int i = 0; i < 10; i++) {
        // Loop interno para as colunas
        for (int j = 0; j < 10; j++) {
            // Imprime o valor da posição e um espaço para melhor visualização
            printf("%d ", tabuleiro[i][j]);
        }
        // Após imprimir todas as colunas de uma linha, pula para a próxima
        printf("\n");
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}