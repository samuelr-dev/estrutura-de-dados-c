// Criar uma agenda telefônica de 100 posições com os seguintes dados: nome, endereço, telefone e email. O programa deve cadastrar novos contatos até que o usuário diga que deseja terminar de cadastrar ou até que todas as posições sejam cadastradas. Ao final, o programa deve exibir todos os contatos com suas respectivas informações.

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    char endereco[100];
    char telefone[20];
    char email[50];
} tipo_agenda;

void main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    tipo_agenda agendaTelefonica[100];
    int i = 0;
    char continuar;


    do {
        printf("\n--- Cadastro do Contato %d ---\n", i + 1);

        printf("Digite o nome: ");
        gets(agendaTelefonica[i].nome);
        printf("Digite o endereço: ");
        gets(agendaTelefonica[i].endereco);
        printf("Digite o telefone: ");
        gets(agendaTelefonica[i].telefone);
        printf("Digite o e-mail: ");
        gets(agendaTelefonica[i].email);

        i++;

        if (i >= 100) {
            printf("\nAgenda cheia! Limite de 100 contatos atingido.\n");
            break; 
        }

        printf("\nDeseja cadastrar outro contato? (S/N): ");
        scanf(" %c", &continuar);
        getchar();

    } while (continuar == 'S' || continuar == 's');

    printf("\n============ CONTATOS CADASTRADOS ============\n");
    for (int j = 0; j < i; j++) {
        printf("\nContato %d:\n", j + 1);
        printf("Nome:     %s\n", agendaTelefonica[j].nome);
        printf("Endereço: %s\n", agendaTelefonica[j].endereco);
        printf("Telefone: %s\n", agendaTelefonica[j].telefone);
        printf("E-mail:   %s\n", agendaTelefonica[j].email);
        printf("---------------------------------------------\n");
    }

}
