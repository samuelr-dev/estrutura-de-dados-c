#include <stdio.h>
#include <locale.h>

void calcularMedia(int n) {
    float valores[10];
    float media = 0, soma = 0;
    int i;

    if (n <= 0 || n > 10) {
        printf("N precisa ser maior que 0 e no maximo 10!");
        printf("\n------------\n");
    }
    else {
        for (i = 0; i < n; i++) {
            printf("%dº Valor: ", i + 1);
            scanf("%f", &valores[i]);
        }

        for (i = 0; i < n; i++) {
            soma += valores[i];
        }

        media = soma / n;

        printf("MÉDIA FINAL: %.2f", media);
        printf("\n------------\n");
    }
}

void areaCubo(float lado) {
    float areaFace = lado * lado;
    float areaTotal = areaFace * 6;

    printf("ÁREA DO CUBO: %.2f", areaTotal);
    printf("\n------------\n");
}

void calcularFatorial(int n) {
    float fatorial = 1;
    int i;

    if (n < 0) {
        printf("O numero precisa ser maior ou igual a 0!");
        printf("\n------------\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("FATORIAL DE %d É: %.2f", n, fatorial);
        printf("\n------------\n");
    }
}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    int option, n;
    float arestaCubo;

    do {

        printf("\n-- MENU --\n");
        printf("(1) CALCULAR MEDIA\n");
        printf("(2) ÁREA DO CUBO\n");
        printf("(3) FATORIAL\n");
        printf("(0) ENCERRAR PROGRAMA\n");
        printf("------------\n");

        printf("Selecione uma opção acima: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Quantos valores você quer adicionar: ");
                scanf("%d", &n);
                calcularMedia(n);
                break;
            case 2:
                printf("Digite o valor da aresta(lado) do cubo: ");
                scanf("%f", &arestaCubo);
                areaCubo(arestaCubo);
                break;
            case 3:
                printf("Digite o valor para calcular o fatorial: ");
                scanf("%d", &n);
                calcularFatorial(n);
                break;
            case 0:
                printf("PROGRAMA ENCERRADO");
                break;
            default:
                break;
        }

    } while (option != 0);

}