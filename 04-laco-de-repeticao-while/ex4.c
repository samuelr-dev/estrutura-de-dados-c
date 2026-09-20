// Escrever a soma dos números inteiros entre 0 e 100 usando o comando while

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    int contador = 0;
    int soma = 0, resultado;

    while (contador <= 100) {

        soma += contador;
        contador++;
    }

    resultado = soma;
    printf("O resultado do somatorio e: %d", resultado);
}
