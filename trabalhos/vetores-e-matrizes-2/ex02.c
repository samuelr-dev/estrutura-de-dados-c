#include <stdio.h>
#include <locale.h>

void readGrades(float vetorNotas[10], float *mediaTurma) {
    int i;
    float soma = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota do %d° aluno: ", i + 1);
        scanf("%f", &vetorNotas[i]);
        soma += vetorNotas[i];
    }

    *mediaTurma = soma / 10;
}

void compareGrades(float med_ing, float med_ale, float med_fra) {

    float maiorMedia = med_ing;
    float menorMedia = med_ing;

    if (med_ale > maiorMedia) {
        maiorMedia = med_ale;
    }
    if (med_fra > maiorMedia) {
        maiorMedia = med_fra;
    }

    printf("-- TURMAS COM A MAIOR MÉDIA (%.2f) -- \n", maiorMedia);
    if (med_ing == maiorMedia) printf("Inglês\n");
    if (med_ale == maiorMedia) printf("Alemão\n");
    if (med_fra == maiorMedia) printf("Francês\n");

    if (med_ale < menorMedia) {
        menorMedia = med_ale;
    }
    if (med_fra < menorMedia) {
        menorMedia = med_fra;
    }

     printf("-- TURMAS COM A MENOR MÉDIA (%.2f) -- \n", menorMedia);
    if (med_ing == menorMedia) printf("Inglês\n");
    if (med_ale == menorMedia) printf("Alemão\n");
    if (med_fra == menorMedia) printf("Francês\n");

}

void main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float notasIngles[10], mediaIngles;
    float notasAlemao[10], mediaAlemao;
    float notasFrances[10], mediaFrances;
    float maiorMedia;

    printf("-- NOTAS DE INGLÊS --\n");
    readGrades(notasIngles, &mediaIngles);

    printf("-- NOTAS DE ALEMÃO --\n");
    readGrades(notasAlemao, &mediaAlemao);

    printf("-- NOTAS DE FRANCÊS --\n");
    readGrades(notasFrances, &mediaFrances);

    printf("-- M�DIAS POR TURMA --\n");
    printf("Inglês: %.2f\n", mediaIngles);
    printf("Alemão: %.2f\n", mediaAlemao);
    printf("Francês: %.2f\n", mediaFrances);

    compareGrades(mediaIngles, mediaAlemao, mediaFrances);
}
