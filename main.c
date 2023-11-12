#include <stdio.h>
#include "matriz.h"
#include "matriz.c"

int main() {
    Matriz A, B, C, D;
    FILE *arquivoA = fopen("C:\\Users\\kauee\\Documents\\MatrizEsparsa\\matriz_A.txt", "r");
    FILE *arquivoB = fopen("C:\\Users\\kauee\\Documents\\MatrizEsparsa\\matriz_B.txt", "r");

    if (arquivoA == NULL || arquivoB == NULL) {
        perror("Erro ao abrir os arquivos.\n");
        return 1;
    }

    A = leMatriz(arquivoA);
    B = leMatriz(arquivoB);

    printf("Matriz A:\n");
    imprimeMatriz(A);

    printf("\nMatriz B:\n");
    imprimeMatriz(B);

    C = somaMatrizes(A, B);

    printf("\nMatriz C (Soma das Matrizes A e B):\n");
    imprimeMatriz(C);

    D = multiplicaMatrizes(A, B);

    printf("\nMatriz D (Resultado da Matriz A e B):\n");
    imprimeMatriz(D);

    fclose(arquivoA);
    fclose(arquivoB);

    return 0;
}