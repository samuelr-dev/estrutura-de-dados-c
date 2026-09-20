// Ler dados inteiros para um vetor de 10 posições e informar a soma desses valores.

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    int inteiros[10], soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &inteiros[i]);
        soma += inteiros[i];
    }

    printf("A soma dos números inteiros digitados foi: %d", soma);
}