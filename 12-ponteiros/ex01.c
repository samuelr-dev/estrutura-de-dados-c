#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[30];
    char RA[15];
    char cidade[30];
    float media;
} aluno;

void getStudentData(aluno *ptr, int numAluno) {
    printf("\nDigite os dados do Aluno %d\n", numAluno);

    printf("Digite o nome: ");
    fgets(ptr->nome, 30, stdin);
    ptr->nome[strcspn(ptr->nome, "\n")] = '\0';

    printf("Digite o RA: ");
    fgets(ptr->RA, 15, stdin);
    ptr->RA[strcspn(ptr->RA, "\n")] = '\0';

    printf("Digite a cidade: ");
    fgets(ptr->cidade, 30, stdin);
    ptr->cidade[strcspn(ptr->cidade, "\n")] = '\0';

    printf("Digite a média: ");
    scanf("%f", &ptr->media);
    getchar();
}

void readAllStudents(aluno *a1, aluno *a2, aluno *a3) {
    getStudentData(a1, 1);
    getStudentData(a2, 2);
    getStudentData(a3, 3);
}

void showMariliaStudents(aluno *a1, aluno *a2, aluno *a3) {
    int encontrado = 0;

    printf("\n-- Alunos que moram em Marília --\n");

    if (strcmp(a1->cidade, "Marília") == 0) {
        printf("%s\n", a1->nome);
        encontrado = 1;
    }
    if (strcmp(a2->cidade, "Marília") == 0) {
        printf("%s\n", a2->nome);
        encontrado = 1;
    }
    if (strcmp(a3->cidade, "Marília") == 0) {
        printf("%s\n", a3->nome);
        encontrado = 1;
    }

    if (!encontrado) {
        printf("Nenhum aluno mora em Marília.\n");
    }
}

void showAboveAverageStudents(aluno *a1, aluno *a2, aluno *a3) {
    int encontrado = 0;

    printf("\n-- RA dos alunos com média maior que 7 --\n");

    if (a1->media > 7) {
        printf("%s\n", a1->RA);
        encontrado = 1;
    }
    if (a2->media > 7) {
        printf("%s\n", a2->RA);
        encontrado = 1;
    }
    if (a3->media > 7) {
        printf("%s\n", a3->RA);
        encontrado = 1;
    }

    if (!encontrado) {
        printf("Nenhum aluno com média maior que 7.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    aluno *p1, *p2, *p3;

    p1 = malloc(sizeof(aluno));
    p2 = malloc(sizeof(aluno));
    p3 = malloc(sizeof(aluno));

    if (p1 == NULL || p2 == NULL || p3 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    readAllStudents(p1, p2, p3);
    showMariliaStudents(p1, p2, p3);
    showAboveAverageStudents(p1, p2, p3);

    free(p1);
    free(p2);
    free(p3);

    return 0;
}
