// Ler apenas números inteiros maiores que 0 até que o usuário digite um número diferente disso. Quando isso acontecer, o programa deve parar e informar a quantidade de números lidos e a soma deles

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    int numDigitado;
    int soma = 0;
    int contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numDigitado);

        if (numDigitado > 0) {
            soma += numDigitado;
            contador++;
        }

    } while (numDigitado > 0);

    printf("Foram lidos: %d numeros\n", contador);
    printf("A soma desses numeros e: %d\n", soma);


}
