// Ler uma matriz quadrada de ordem 5 e informar a soma dos elementos da diagonal principal

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float matriz[5][5], soma = 0;
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite um valor real para a posição [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);

            if (i == j) {
                soma+= matriz[i][j];
            }
        }
    }

    printf("\n-- Matriz Resultante --\n");

    for(i = 0; i < 5; i++) {

        for(j = 0; j < 5; j++) {
            printf("[%8.2f]   ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO soma da diagonal principal é: %.2f", soma);

    system("pause");
    system("cls");
}
