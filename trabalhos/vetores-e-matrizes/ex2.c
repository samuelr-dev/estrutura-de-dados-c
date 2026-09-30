#include <stdio.h>
#include <locale.h>
#include <ctype.h>

typedef struct {
    char nome[50];
    float precoHamburguer;
    float precoCerveja;
    float precoCombo;
} tipo_hamb;

tipo_hamb listaEst[15];
int quantidadeCadastrada = 0;

void cadastrarEstabelecimento() {
    char continuar;
    int i;

    if (quantidadeCadastrada >= 15) {
        printf("QUANTIDADE MÁXIMA DE ESTABELECIMENTOS ATINGIDA\n");
    }
    else {
        do {
            printf("\nCadastrar Hamburgueria nº%d\n", quantidadeCadastrada + 1);

            getchar();
            printf("Nome do Estabelecimento: ");
            fgets(listaEst[quantidadeCadastrada].nome, 50, stdin);

            i = 0;
            while (listaEst[quantidadeCadastrada].nome[i] != '\0' && listaEst[quantidadeCadastrada].nome[i] != '\n') {
                i++;
            }
            listaEst[quantidadeCadastrada].nome[i] = '\0';

            printf("Preço do Hambúrguer (R$): ");
            scanf("%f", &listaEst[quantidadeCadastrada].precoHamburguer);
            printf("Preço da Cerveja Artesanal (R$): ");
            scanf("%f", &listaEst[quantidadeCadastrada].precoCerveja);

            listaEst[quantidadeCadastrada].precoCombo = listaEst[quantidadeCadastrada].precoHamburguer + listaEst[quantidadeCadastrada].precoCerveja;

            printf("Cadastro de estabelecimento realizado!\n");
            quantidadeCadastrada++;

            if (quantidadeCadastrada < 15) {
                printf("Deseja cadastrar mais estabelecimentos? (s/n): ");
                scanf(" %c", &continuar);
                continuar = tolower(continuar);
            } else {
                continuar = 'n';
            }

        } while (continuar == 's' && quantidadeCadastrada < 15);
    }
}

void procurarMaisBarato() {
    int i;
    float menorCombo;

    if (quantidadeCadastrada == 0) {
        printf("\nNENHUM ESTABELECIMENTO CADASTRADO\n");
    }
    else {
        menorCombo = listaEst[0].precoCombo;

        for (i = 1; i < quantidadeCadastrada; i++) {
            if (listaEst[i].precoCombo < menorCombo) {
                menorCombo = listaEst[i].precoCombo;
            }
        }

        printf("\nCOMBO MAIS BARATO: R$%.2f\n", menorCombo);
        printf("ESTABELECIMENTO(S):\n");

        for (i = 0; i < quantidadeCadastrada; i++) {
            if (listaEst[i].precoCombo == menorCombo) {
                printf("- %s\n", listaEst[i].nome);
            }
        }
    }
}

void mediaPrecoCerveja() {
    int i;
    float soma = 0, media;

    if (quantidadeCadastrada == 0) {
        printf("\nNENHUM ESTABELECIMENTO CADASTRADO\n");
    }
    else {
        soma = 0;
        for (i = 0; i < quantidadeCadastrada; i++) {
            soma += listaEst[i].precoCerveja;
        }

        media = soma / quantidadeCadastrada;

        printf("\nPREÇO MÉDIO DA CERVEJA ARTESANAL: R$%.2f\n", media);
    }
}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    int option;

    do {

        printf("\n-- MENU --\n");
        printf("(1) CADASTRAR ESTABELECIMENTO\n");
        printf("(2) PROCURAR MAIS BARATO\n");
        printf("(3) MÉDIA DE PREÇO DA CERVEJA NA CIDADE\n");
        printf("(0) ENCERRAR PROGRAMA\n");
        printf("------------\n");

        printf("Selecione uma opção acima: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                cadastrarEstabelecimento();
                break;
            case 2:
                procurarMaisBarato();
                break;
            case 3:
                mediaPrecoCerveja();
                break;
            case 0:
                printf("PROGRAMA ENCERRADO");
                break;
            default:
                break;
        }
    } while (option != 0);

}