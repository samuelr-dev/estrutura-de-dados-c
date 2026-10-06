#include <stdio.h>
#include <locale.h>

void readValues(float vet[50]) {
    int i;

    printf("\n-- Digite 50 valores reais --\n");
    for(i = 0; i < 50; i++) {
        printf("Valor [%d]: ", i);
        scanf("%f", &vet[i]);
    }

}

void sumAboveAverage(float vet[50]) {
    int i;
    float somaTotal = 0, media = 0, somaSobreMedia = 0;

    for(i = 0; i < 50; i++) {
        somaTotal += vet[i];
    }

    media = somaTotal / 50;

    for(i = 0; i < 50; i++) {
        if (vet[i] > media) {
            somaSobreMedia += vet[i];
        }
    }

    printf("-- RESULTADO SOMA DOS ELEMENTOS ACIMA DA MÉDIA --\n");
    printf("Média Geral: %.2f\n", media);
    printf("Resultado da Soma: %.2f\n", somaSobreMedia);
}

void findLargestValue(float vet[50]) {
    float maiorValor = vet[0];
    int i, posicaoMaior = 0;

    for(i = 0; i < 50; i++) {
        if (vet[i] > maiorValor) {
            maiorValor = vet[i];
            posicaoMaior = i;
        }
    }

    printf("-- MAIOR NÚMERO E POSIÇÃO --\n");
    printf("Número: %.2f\n", maiorValor);
    printf("Posição: %d\n", posicaoMaior);
}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    float valoresReais[50];

    readValues(valoresReais);
    sumAboveAverage(valoresReais);
    findLargestValue(valoresReais);
}
