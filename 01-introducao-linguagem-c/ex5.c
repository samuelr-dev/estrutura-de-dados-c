// Ler os valores de a e b, e trocá-los entre si. Exemplo: a recebe 2 e b recebe 3, então mostre a = 3 e b = 2.

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    temp = a;
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    a = b;
    b = temp;
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d", b);
}
