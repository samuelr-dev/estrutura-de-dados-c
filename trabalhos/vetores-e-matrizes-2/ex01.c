#include <stdio.h>
#include <locale.h>

void readVector(float v[8]) {
    int i;

    for(i = 0; i < 8; i++) {
        printf("Informe o %d° valor: ", i + 1);
        scanf("%f", &v[i]);
    }

}

void showVector(float v[8]) {
    int i;

    for(i = 0; i < 8; i++) {
        printf("Valor [%d]: %.2f\n", i, v[i]);
    }

}

void changeVectorsValue(float v[8], float w[8]) {
    float aux[8];
    int i;

    for(i = 0; i < 8; i++) {
        aux[i] = v[i];
        v[i] = w[i];
        w[i] = aux[i];
    }
}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    float a[8], b[8];

    printf("Insira os valores do vetor A\n");
    readVector(a);
    printf("Insira os valores do vetor B\n");
    readVector(b);

    printf("\nVALORES ANTES DA ALTERAÇÃO\n");
    printf("VALORES DE A\n");
    showVector(a);
    printf("VALORES DE B\n");
    showVector(b);
    printf("------------------------------");

    changeVectorsValue(a, b);

    printf("\nVALORES APÓS A ALTERAÇÃO\n");
    printf("VALORES DE A\n");
    showVector(a);
    printf("VALORES DE B\n");
    showVector(b);
    printf("------------------------------");
}
