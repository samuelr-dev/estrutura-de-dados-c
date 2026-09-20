// Ler uma mensagem e escrevê-la 10 vezes na tela

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    char mensagem[100];

    printf("Escreva uma mensagem: ");
    fgets(mensagem,sizeof(mensagem), stdin);

    for (int i=1; i <= 10; i++) {
        printf("%s", mensagem);
    }
}
