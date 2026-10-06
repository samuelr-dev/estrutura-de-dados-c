#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char cpf[15];
    char nome[50];
    int idade;
    char sexo;
    float salario;
} t_funcionario;

void readEmployees(t_funcionario lista[20]) {
    int i;

    printf("-- Cadastro de Funcionários --\n");

    for (i = 0; i < 20; i++) {
        printf("\nFuncionário %d\n", i + 1);

        printf("CPF: ");
        scanf("%14s", lista[i].cpf);
        getchar();

        printf("Nome: ");
        fgets(lista[i].nome, 50, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &lista[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &lista[i].sexo);

        printf("Sal�rio: ");
        scanf("%f", &lista[i].salario);
    }
}

void printEmployee(t_funcionario f) {
    printf("CPF: %s\n", f.cpf);
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Sexo: %c\n", f.sexo);
    printf("Salário: R$ %.2f\n", f.salario);
}

void searchByCpf(t_funcionario lista[20]) {
    char cpfBusca[15];
    int i, encontrado = 0;

    printf("\nDigite o CPF para busca: ");
    scanf("%14s", cpfBusca);

    for (i = 0; i < 20; i++) {
        if (strcmp(lista[i].cpf, cpfBusca) == 0) {
            printf("\nFuncionário encontrado:\n");
            printEmployee(lista[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nO CPF procurado não foi encontrado.\n");
    }
}

void aboveAverage(t_funcionario lista[20]) {
    int i, funcEncontrado = 0;
    float soma = 0, media;

    for (i = 0; i < 20; i++) {
        soma += lista[i].salario;
    }
    media = soma / 20;

    printf("\nMédia salarial: R$ %.2f\n", media);
    printf("Funcionários com salário acima da média:\n");

    for (i = 0; i < 20; i++) {
        if (lista[i].salario > media) {
            printf("\n");
            printEmployee(lista[i]);
            funcEncontrado = 1;
        }
    }

    if (!funcEncontrado) {
        printf("Nenhum funcionário acima da média.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    t_funcionario funcionarios[20];
    int opcao;

    readEmployees(funcionarios);

    do {
        printf("\n-- MENU --\n");
        printf("1 - Buscar funcionário pelo CPF\n");
        printf("2 - Listar funcionários com salário acima da média\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                searchByCpf(funcionarios);
                break;
            case 2:
                aboveAverage(funcionarios);
                break;
            case 0:
                printf("Progama Encerrado\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
