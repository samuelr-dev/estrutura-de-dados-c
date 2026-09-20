// Ler os dados (nome, RA, cidade e média) de 3 alunos e informar o nome dos alunos que moram em Marília e o RA dos alunos com maior média. Para realizar comparações entre strings, utilize a função strcmp() da biblioteca string.h.

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct aluno {
    char nome[50];
    char RA[20];
    char cidade[50];
    float media;
};

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    struct aluno alunos[3];
    float maiorMedia;

    for (int i = 0; i < 3; i++) {
        printf("\nDigite os dados do Aluno %d\n", i+1);

        printf("Digite o nome: ");
        gets(alunos[i].nome);

        printf("Digite o RA: ");
        gets(alunos[i].RA);

        printf("Digite a cidade: ");
        gets(alunos[i].cidade);

        printf("Digite a média: ");
        scanf("%f", &alunos[i].media);
        getchar();
    }

    maiorMedia = alunos[0].media;

    for (int i = 1; i < 3; i++) {

        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
        }
    }

    printf("\nAlunos que moram em Marília:\n");

    for (int i = 0; i < 3; i++) {

        if (strcmp(alunos[i].cidade, "Marilia") == 0) {
            printf("%s\n", alunos[i].nome);
        }
    }

    printf("\nRA dos alunos com maior média:\n");

    for (int i = 0; i < 3; i++) {

        if (alunos[i].media == maiorMedia) {
            printf("%s\n", alunos[i].RA);
        }
    }
}
