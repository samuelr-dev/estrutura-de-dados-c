// Ler 2 notas bimestrais e informar se o aluno foi aprovado, reprovado ou ficou de exame. Caso tenha ficado de exame, informar qual a nota necessária no exame.
// Observação 1: aprovado >= 7; exame >= 4 e < 7.
// Observação 2: nota necessária no exame = 10 – média do aluno.

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    float nota1, nota2, media, notaExame;

    printf("Digite 2 notas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;

    if (media >= 7){
        printf("Voce foi aprovado com media %.2f", media);
    }
    else if (media >= 4 && media < 7) {
        notaExame = 10 - media;
        printf("Voce ficou de exame e precisa tirar %.2f na prova;", notaExame);
    }
    else {
        printf("Voce foi reprovado, sua media foi de: %.2f!", media);
    }

}
