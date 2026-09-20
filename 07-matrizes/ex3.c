// Ler uma matriz 5x6 de valores inteiros, multiplicá-la por 4 e exibir o resultado.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float matriz[5][6];
    int i, j;

    for(i = 0; i < 5; i++) {

        for(j = 0; j < 6; j++) {
            printf("Digite um valor para a posição [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {

        for(j = 0; j < 6; j++) {
            matriz[i][j] *= 4;
        }
    }

    printf("\n--- MATRIZ RESULTANTE (x4) ---\n");

    for(i = 0; i < 5; i++) {

        for(j = 0; j < 6; j++) {
            printf("[%8.2f]   ", matriz[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    system("cls");
}

