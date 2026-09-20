// Calcular a área e o perímetro de um quadrado. Onde área = lado x lado e perímetro = 4 x lado.

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

	float lado, perimetro, area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    perimetro = 4 * lado;
    printf("Area do quadrado: %.2f\n", area);
    printf("Perímetro do quadrado: %.2f", perimetro);
}
