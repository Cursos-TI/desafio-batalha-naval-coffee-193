#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 5
#define COLUNAS 5

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    int matriz [LINHAS][COLUNAS] = {
        {3, 0, 3, 3, 3},
        {3, 0, 0, 0, 0}, 
        {3, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf("návio na vertical está ná posição: [0][0], [0][1], [0][2]\n");
    printf("**Exemplo:\ntiro ná posição: \n[0][0] = %d\n[0][1] = %d\n[0][2] = %d\n", matriz [0][0], matriz [1][0], matriz [0][2]);

    printf("návio na horizontal está ná posição: [2][0], [3][0], [4][0]\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int matriz2 [10][10];
    int contador = 0;


    //Posicionando os navios (horizontal)

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz2[i][j] = 0;
            printf("%d ", matriz2 [i][j]);
            contador++;

            if (contador < 5){
                matriz2 [i][j] = 3;
            } else if (contador > 97){
                matriz2 [i][j] = 3;
            }
        }
                printf("\n");
    }
    


    printf("\n\n");

    //Posicionando os navios (diagonal)

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j & i < 3)
            {
                matriz2 [i][j] = 3;
            } else if (i == j + 2 & i < 5) {
                matriz2 [i][j] = 3;
            }
            printf("%d ", matriz2 [i][j]);
        }
        printf("\n");
    }
    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
