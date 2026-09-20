// Ler 10 números e informar a soma, a média, o menor e o maior.

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float numDigitado;
    float soma = 0;
    float media;
    float menor, maior;

    for (int i=1; i <= 10; i++) {
        printf("Digite o %dº numero : ", i);
        scanf("%f", &numDigitado);
        soma += numDigitado;

        if (i == 1) {
            maior = numDigitado;
            menor = numDigitado;
        } else {

            if (numDigitado > maior) {
                maior = numDigitado;
            }
            if (numDigitado < menor) {
                menor = numDigitado;
            }
        }
    }

    media = soma / 10;

    printf("SOMA: %.2f\n", soma);
    printf("MEDIA: %.2f\n", media);
    printf("MENOR: %.2f\n", menor);
    printf("MAIOR: %.2f\n", maior);
}