#include <stdio.h>
#include <locale.h>

long long factorial(int x) {
    long long resultado = 1;
    int i;

    if (x < 0) {
        return -1;
    }

    for (i = 2; i <= x; i++) {
        resultado *= i;
    }

    return resultado;
}

int sumUpToN(int n) {
    int soma = 0;
    int i;

    if (n < 0) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int x, n;
    long long fat;

    printf("Digite X para calcular o fatorial: ");
    scanf("%d", &x);

    fat = factorial(x);
    if (fat == -1) {
        printf("Fatorial não existe para número negativo.\n");
    } else {
        printf("Fatorial de %d = %lld\n", x, fat);
    }

    printf("\nDigite N para somar os inteiros positivos até N: ");
    scanf("%d", &n);

    printf("Soma de 1 até %d = %d\n", n, sumUpToN(n));

    return 0;
}