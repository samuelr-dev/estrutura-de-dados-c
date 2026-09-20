// Ler caracteres do teclado até que o usuário digite o símbolo $ ou até que ocorram 35 repetições.

#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    char ch;
    int contador = 0;

    do {
        printf("\nDigite um caracter: ");
        ch = getche();
        contador++;

    } while (ch != '$' && contador < 35);
}

