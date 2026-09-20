// Ler o valor de uma mercadoria e o valor de desconto (%), e informar o preço com desconto.

#include <stdio.h>
#include <locale.h>

void main(){
	//configurar para o idioma português
	setlocale(LC_ALL, "pt_BR.UTF-8");

    float valorProduto;
    float percentualDesconto;
    float desconto;
    float preco;

    printf("Digite o valor de um produto: ");
    scanf("%f", &valorProduto);
    printf("Digite o valor do desconto: ");
    scanf("%f", &percentualDesconto);
    desconto =  valorProduto * (percentualDesconto / 100);
    preco = valorProduto - desconto;

    printf("O valor do final do produto e: %.2f", preco);
}
