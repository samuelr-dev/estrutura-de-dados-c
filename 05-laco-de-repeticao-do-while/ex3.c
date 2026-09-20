// Construir um programa com um menu que permita as seguintes operações: (1) soma de 2 valores reais; (2) encontrar o maior de 3 números; (3) calcular o fatorial de X; (4) calcular o valor de a^b.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {

setlocale(LC_ALL, "Portuguese");

int option;
float soma = 0;
unsigned long long fatorial = 1;
int xFatorial;
float num1, num2, num3;
float maior;
double potencia, base, expoente;

do {
    printf("--MENU--\n");
    printf("(1)- Soma de 2 valores reais\n");
    printf("(2)- Encontrar o maior de 3 números\n");
    printf("(3)- Calcular o fatorial de X\n");
    printf("(4)- Calcular o valor de a^b\n");
    printf("(0)- Encerrar Programa\n");
    printf("Selecione uma acima: ");
    scanf("%d", &option);

    switch(option) {

        case 0:
            printf("Programa Encerrado\n");
            break;
        case 1:
            printf("Digite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);
            soma = num1 + num2;
            printf("O resultado da soma é: %.2f\n", soma);
            break;
        case 2:
            printf("Digite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);
            printf("Digite o 3º número: ");
            scanf("%f", &num3);

            maior = num1;

            if (num2 > maior) {
                maior = num2;
            }
            if (num3 > maior) {
                maior = num3;
            }

            printf("O maior número é %.2f\n", maior);
            break;
        case 3:
            fatorial = 1;
            printf("Digite um número: ");
            scanf("%d", &xFatorial);

            if (xFatorial < 0) {
                printf("Não existe fatorial para números negativos!");
            }
            else {
                for (int i = 1; i <= xFatorial; i++) {
                    fatorial *= i;
                }
            }

            printf("O resultado do fatorial é igual a: %llu\n", fatorial);
            break;
        case 4:
            potencia = 1;
            printf("Digite o valor da base: ");
            scanf("%lf", &base);
            printf("Digite o valor do expoente: ");
            scanf("%lf", &expoente);

            if (base > 0) {

                for (int j = 1; j <= expoente; j++) {
                    potencia *= base;
                }
            }
            else {
                printf("Digite um valor válido para a base!");
            }

            printf("O resultado da potencia é: %.2lf\n", potencia);
            break;
        default:
            printf("Voce nao selecionou nenhuma opcao valida!\n");
    }
    system("pause");
    system("cls");
} while (option != 0);
}
