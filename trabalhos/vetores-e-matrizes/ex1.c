#include <stdio.h>
#include <locale.h>

void exibirMatriz(int x, float matriz[5][5]) {
    int i, j;

    printf("--MATRIZ--\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void maiorElemento(int x, float matriz[5][5]) {
    float maior;
    int i, j;
    maior = matriz[0][0];

    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nMAIOR NÚMERO DA MATRIZ: %.2f", maior);
    printf("\n-------------\n");
}

void somaLinha(int x, float matriz[5][5]) {
    float soma;
    int i, j;

    for (i = 0; i < x; i++) {
        soma = 0;
        for (j = 0; j < x; j++) {
            soma += matriz[i][j];
        }
        printf("\nSOMA LINHA[%d]: %.2f", i + 1, soma);
    }

    printf("\n-------------\n");
}

void menorElemento(int x, float matriz[5][5]) {
    float menor;
    int i, j, linhaMenor = 0, colunaMenor = 0;
    menor = matriz[0][0];

    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("\nMENOR NÚMERO DA MATRIZ: %.2f", menor);
    printf("\nA POSIÇÃO DO MENOR ELEMENTO DA MATRIZ É: [%d][%d]", linhaMenor + 1, colunaMenor + 1);
    printf("\n-------------\n");
}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    float matriz[5][5];
    int i, j, x;

    do {
        printf("QUAL SERÁ A ORDEM DA MATRIZ: ");
        scanf("%d", &x);

        if (x < 1 || x > 5) {
            printf("X tem que ser um valor entre 1 e 5\n");
        }

    } while (x < 1 || x > 5);

    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("Digite o valor para [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    exibirMatriz(x, matriz);
    maiorElemento(x, matriz);
    somaLinha(x, matriz);
    menorElemento(x, matriz);
}