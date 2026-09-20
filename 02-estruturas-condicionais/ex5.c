// Ler o salário mensal de um funcionário e informar qual alíquota de IR ele deve pagar

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    float salario;

    printf("Digite o salario mensal do funcionario: ");
    scanf("%f", &salario);

    if (salario > 4664.68){
        printf("Voce tera de pagar 27,5%% de IR");
    }
    else if (salario > 3751.06) {
        printf("Voce tera de pagar 22,5%% de IR");
    }
    else if (salario > 2826.66){
        printf("Voce tera de pagar 15%% de IR");
    }
    else if (salario > 2428.81){
        printf("Voce tera de pagar 7,5%% de IR");
    }
    else {
        printf("Voce esta isento de IR");
    }
}
