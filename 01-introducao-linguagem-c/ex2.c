// Receber os valores da base e da altura de um triângulo e informar a área. Onde área = (base x altura) / 2.

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

    float base;
    float altura;
    float area;

    printf("Digite a base de um triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura de um triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f", area);
}
