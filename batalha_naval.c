#include <stdio.h>

/**
 * Desafio: Tabuleiro Completo e Navios Diagonais (Nível Intermediário)
 * Objetivo: Posicionar 4 navios de tamanho 3 em um tabuleiro 10x10,
 * incluindo posicionamentos nas diagonais principal e secundária.
 */

int main() {
    // 1. Declaração e Inicialização do Tabuleiro 10x10 com 0 (Água)
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- POSICIONAMENTO DOS NAVIOS (Tamanho 3, Valor 3) ---

    // 2. Navio Horizontal
    // Linha 0, Colunas 0, 1, 2
    for (int j = 0; j < 3; j++) {
        tabuleiro[0][j] = 3;
    }

    // 3. Navio Vertical
    // Coluna 9, Linhas 7, 8, 9
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][9] = 3;
    }

    // 4. Navio Diagonal 1 (Crescente - Diagonal Principal)
    // Coordenadas: (4,4), (5,5), (6,6)
    // Note que linha e coluna aumentam juntas
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 + i][4 + i] = 3;
    }

    // 5. Navio Diagonal 2 (Decrescente - Diagonal Secundária)
    // Coordenadas: (1,8), (2,7), (3,6)
    // Aqui a linha aumenta e a coluna diminui
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][8 - i] = 3;
    }

    // 6. Exibição do Tabuleiro
    printf("--- BATALHA NAVAL (NÍVEL INTERMEDIÁRIO) ---\n\n");
    
    // Cabeçalho de colunas para facilitar a leitura
    printf("    0 1 2 3 4 5 6 7 8 9\n");
    printf("    -------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("%d | ", i); // Índice da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}