#include <stdio.h>

/**
 * Batalha Naval - Nível Avançado
 * Implementação de Habilidades Especiais (Cone, Cruz, Octaedro)
 * Usando Matrizes, Loops Aninhados e Condicionais.
 */

int main() {
    // 1. Tabuleiro Principal 10x10
    int tabuleiro[10][10] = {0}; // Inicializa tudo com 0 (Água)

    // Posicionando alguns navios do nível anterior (valor 3)
    for (int j = 0; j < 3; j++) tabuleiro[0][j] = 3; // Horizontal
    for (int i = 0; i < 3; i++) tabuleiro[7 + i][9] = 3; // Vertical

    // 2. Matrizes de Habilidade (5x5)
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // 3. Construção Dinâmica das Matrizes de Habilidade
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Habilidade em Cruz: Centro na linha 2 e coluna 2
            if (i == 2 || j == 2) cruz[i][j] = 1;

            // Habilidade em Cone: Triângulo apontando para baixo
            if (i == 0 && j == 2) cone[i][j] = 1;
            if (i == 1 && (j >= 1 && j <= 3)) cone[i][j] = 1;
            if (i == 2) cone[i][j] = 1;

            // Habilidade em Octaedro (Losango): Distância de Manhattan
            // abs(i - centro) + abs(j - centro) <= raio
            int di = (i > 2) ? i - 2 : 2 - i;
            int dj = (j > 2) ? j - 2 : 2 - j;
            if (di + dj <= 2) octaedro[i][j] = 1;
        }
    }

    // 4. Sobreposição no Tabuleiro Principal (Valor 5 para Habilidade)
    // Vamos definir pontos de origem (centro da matriz 5x5 no tabuleiro)
    int origens[3][2] = {{2, 2}, {5, 5}, {2, 7}}; // [Linha, Coluna] para cada habilidade

    // Exemplo: Aplicando a Cruz na origem (5, 5)
    int oLinha = 5, oColuna = 5;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Calcula a posição real no tabuleiro (centralizando a matriz 5x5)
            int realL = oLinha - 2 + i;
            int realC = oColuna - 2 + j;

            // Verifica se está dentro dos limites do tabuleiro 10x10
            if (realL >= 0 && realL < 10 && realC >= 0 && realC < 10) {
                if (cruz[i][j] == 1) tabuleiro[realL][realC] = 5;
            }
        }
    }

    // 5. Exibição Final
    printf("--- BATALHA NAVAL: HABILIDADES ESPECIAIS ---\n\n");
    printf("Legenda: 0:Agua | 3:Navio | 5:Habilidade\n\n");
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}