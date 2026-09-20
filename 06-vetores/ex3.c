// Ler valores para um vetor de inteiros de tamanho 30, até que o usuário digite o valor 0 ou até que todas as posições sejam preenchidas. Por fim, o programa deve informar os valores lidos.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    int inteiros[30], i = 0, valoresLidos = 0;

    do {
        printf("Digite um numero inteiro ou 0 para sair: ");
        scanf("%d", &inteiros[i]);

        if (inteiros[i] == 0) {
            break;
        }

        valoresLidos++;
        i++;
    } while (valoresLidos < 30);

    printf("\n--Valores Lidos--\n");

    if (valoresLidos > 0) {
        for(i = 0; i < valoresLidos; i++) {
            printf("%d ", inteiros[i]);
        }
        printf("\nTotal de elementos lidos: %d\n", valoresLidos);
    }
    else {
        printf("Nenhum valor foi lido, somente o 0\n");
    }
    system("pause");
    system("cls");
}
