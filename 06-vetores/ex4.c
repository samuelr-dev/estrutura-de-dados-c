// Ler uma palavra (string) e informar quantas cosoantes e quantas vogais ela possui. Para saber o tamanho da string, utilize a função strlen() da biblioteca string.h.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");

    char string[150];
    int tamanhoString, i;
    int vogais = 0;
    int consoantes = 0;

    printf("Digite um texto: ");
    gets(string);
    tamanhoString = strlen(string);

    for(i = 0; i < tamanhoString; i++) {

        switch(tolower(string[i])) {

            case 'a':
                vogais++;
                break;
            case 'e':
                vogais++;
                break;
            case 'i':
                vogais++;
                break;
            case 'o':
                vogais++;
                break;
            case 'u':
                vogais++;
                break;
            default:
                if (string[i] != ' ' && string[i] != '\n' && string[i] != '\0') {
                    consoantes++;
                }
                break;
        }
    }

    printf("\nA quantidade de vogais digitadas foi: %d\n", vogais);
    printf("A quantidade de consoantes digitadas foi: %d\n", consoantes);

    system("pause");
    system("cls");
}
