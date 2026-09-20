// Calcular o resultado do somatório sum_{a=1}^{7} 3a^2 + a - 2

#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    int termoInicial = 1;
    int termoFinal = 7;
    float resultado, soma = 0, potencia;

    while (termoInicial <= termoFinal) {

        potencia = pow(termoInicial, 2);

        soma += 3 * potencia + termoInicial - 2;
        termoInicial++;
    }

    resultado = soma;
    printf("O resultado do somatorio e: %.2f", resultado);
}
