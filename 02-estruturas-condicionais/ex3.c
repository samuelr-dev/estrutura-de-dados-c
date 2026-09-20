// Ler um valor inteiro e informar se ele é par ou ímpar.

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0){
        printf("O numero %d e par", n1);
    }
    else {
        printf("O numero %d e impar", n1);
    }

}