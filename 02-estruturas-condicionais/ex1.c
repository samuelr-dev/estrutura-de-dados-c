// Receber 5 números e verificar qual é o maior, o menor, a soma e a média

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float n1,n2,n3,n4,n5,soma,media,menor,maior;

    printf("Digite 5 numeros: ");
    scanf("%f %f %f %f %f", &n1,&n2,&n3,&n4,&n5);

    maior = n1;
    menor = n1;

    if (n2 > maior) maior = n2;
    if (n2 < menor) menor = n2;

    if (n3 > maior) maior = n3;
    if (n3 < menor) menor = n3;

    if (n4 > maior) maior = n4;
    if (n4 < menor) menor = n4;

    if (n5 > maior) maior = n5;
    if (n5 < menor) menor = n5;

    soma = n1 + n2 + n3 + n4 + n5;
    media = soma / 5;

    printf("O maior numero e: %.2f\n", maior);
    printf("O menor numero e: %.2f\n", menor);
    printf("A soma dos 5 numeros e igual a: %.2f\n", soma);
    printf("A media entre os 5 numeros e igual a: %.2f", media);

}
