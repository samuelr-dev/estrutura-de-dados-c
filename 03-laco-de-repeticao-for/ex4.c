// Escrever todos os números múltiplos de 3 entre 0 e 500

#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "pt-BR.UTF-8");
    
     for (int i = 0; i <= 500; i += 3) {
        printf("- %d\n", i);
    }
}
