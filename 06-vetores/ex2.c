// Ler 5 valores reais e escrevê-los na ordem inversa da leitura.

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float reais[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite um número real: ");
        scanf("%f", &reais[i]);
    }
    for(i = 5; i > 0; i--) {
        printf("%.2f\n", reais[i-1]);

    }
}