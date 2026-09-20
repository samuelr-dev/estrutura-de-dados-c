// Ler os valores de a, b, c e informar o valor de x, seguindo a fórmula x = 2ab + 3ac – 4bc

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

    float a, b, c, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    x = 2 * (a * b) +  3 * (a * c) - 4 * (b * c);

    printf("O valor de x e: %.2f", x);
}
