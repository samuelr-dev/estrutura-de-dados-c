// Calcular o perímetro de um polígono qualquer, onde o usuário deve informar o número de lados do polígono

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    int ladosPoligono;
    float perimetro = 0, valorLado;

    printf("Digite a quantidade de lados de um poligono: ");
    scanf("%d", &ladosPoligono);


	if (ladosPoligono >= 3) {
		while (ladosPoligono != 0) {

            printf("Digite o valor de um lado do poligono: ");
            scanf("%f", &valorLado);
            perimetro += valorLado;
            ladosPoligono--;
        }

        printf("O perimetro do poligono e: %.2f", perimetro);

	}
	else {
		printf("A quantidade de poligonos nao pode ser menor que 3");
	}

}
