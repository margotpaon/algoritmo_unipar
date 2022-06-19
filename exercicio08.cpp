#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int l, c, soma, mat[4][5], somaLinhas[4], somaColunas[5], soma_total;

    srand(time(NULL));

    // preenche a matriz
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            mat[l][c] = rand() % 5;
        }
    }

    // letra a) soma das linhas
    for(l = 0; l < 4; l++){
        soma = 0;
        for(c = 0; c < 5; c++){
            soma += mat[l][c];
        }
        somaLinhas[l] = soma;
    }

    // letra b) soma das colunas
    soma_total = 0;
    for(c = 0; c < 5; c++){
        soma = 0;
        for(l = 0; l < 4; l++){
            soma += mat[l][c];
        }
        somaColunas[c] = soma;
        soma_total += soma;
    }

    // impressão das estruturas
    printf("\nMatriz:\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\nVetor com a soma das linhas:\n");
    for(l = 0; l < 4; l++){
        printf("Linha %d: %d\n", l+1, somaLinhas[l]);
    }

    printf("\n\nVetor com a soma das colunas:\n");
    for(c = 0; c < 5; c++){
        printf("Coluna %d: %d\n", c+1, somaColunas[c]);
    }
    printf("\n\nA soma de todos elementos da matriz é: %d\n",soma_total);

    return 0;
}