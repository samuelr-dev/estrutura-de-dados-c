// Ler N caracteres, onde N é informado pelo usuário.

#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    char caracter;
    int contador = 1;
    int limite;

    printf("Digite quantos caracteres deseja adicionar: ");
    scanf("%d", &limite);

    while (contador <= limite) {
        printf("\nDigite um caracter: ");
        caracter = getche();
        contador++;
    }
}
