// Calcular a média de 4 valores inteiros

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1,n2,n3,n4;
    float soma = 0;
    float media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    soma += n1;
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    soma += n2;
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);
    soma += n3;
    printf("Digite o quarto numero inteiro: ");
    scanf("%d", &n4);
    soma += n4;

    media = soma / 4;
    printf("A media da soma de 4 valores inteiros e: %.2f", media);
}
