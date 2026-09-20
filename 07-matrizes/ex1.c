// Ler uma matriz 4x3 de números reais e informar qual é o maior valor lido.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float matriz[4][3], maior;
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite um valor real para a posição [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);



        }
    }
    maior = matriz[0][0];

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }


    printf("\n-- Matriz Resultante --\n");

     for(i = 0; i < 4; i++) {

        for(j = 0; j < 3; j++) {
            printf("[%8.2f]   ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior valor lido na matriz foi: %.2f\n", maior);

    system("pause");
    system("cls");
}
