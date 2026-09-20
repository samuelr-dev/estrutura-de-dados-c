// Escrever todos os números pares entre 0 e 100.

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

     for (int i = 0; i <= 100; i += 2) {
        printf("- %d\n", i);
    }
}
