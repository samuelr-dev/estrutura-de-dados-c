// Ler os dados (nome, RA e média) de 10 alunos e informar o nome dos alunos que têm a maior média e o RA dos alunos que têm a menor média.

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    char RA[20];
    float media;
} tipo_aluno;

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    tipo_aluno alunos[10];
    float maiorMedia, menorMedia;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite os dados do Aluno %d\n", i+1);

        printf("Digite o nome: ");
        gets(alunos[i].nome);

        printf("Digite o RA: ");
        gets(alunos[i].RA);

        printf("Digite a média: ");
        scanf("%f", &alunos[i].media);
        getchar();
    }

    maiorMedia = alunos[0].media;
    menorMedia = alunos[0].media;

  for (int i = 1; i < 10; i++) {
        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
        }
        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
        }
    }

    printf("\nNome dos alunos com maior média:\n");

    for (int i = 0; i < 10; i++) {

        if (alunos[i].media == maiorMedia) {
            printf("%s\n", alunos[i].nome);
        }
    }

        printf("\nRA dos alunos com menor média:\n");

    for (int i = 0; i < 10; i++) {

        if (alunos[i].media == menorMedia) {
            printf("%s\n", alunos[i].RA);
        }
    }
}
