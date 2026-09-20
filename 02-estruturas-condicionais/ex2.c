// Ler 2 valores e dividir o primeiro valor lido pelo segundo. Lembre-se de que não existe divisão por zero

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float n1,n2, resultado;

    printf("Digite 2 numeros: ");
    scanf("%f %f", &n1,&n2);

    if (n2 != 0){
        resultado = n1 / n2;
        printf("A divisao de %.2f por %.2f e igual a: %.2f", n1, n2, resultado);
    }
    else {
        printf("Nao se pode dividir por 0");
    }
}
