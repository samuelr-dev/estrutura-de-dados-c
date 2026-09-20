// Ler o nome de um aluno, duas notas, calcular a média e escrever o nome do aluno e a sua média.

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20];
	float nota1, nota2, media;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite a sua primeira nota: ", nota1);
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ", nota2);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("A média de %s final foi: %.2f", nome, media);
}
