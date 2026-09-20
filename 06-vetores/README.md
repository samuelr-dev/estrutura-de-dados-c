# 06 - Vetores

Exercícios sobre vetores unidimensionais e manipulação de strings.

## Tópicos abordados

- Declaração, leitura e percurso de vetores
- Leitura com condição de parada e limite de posições
- Strings como vetores de `char`
- Funções `strlen` e `tolower`

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex1.c` | Leitura de 10 inteiros e soma dos valores |
| `ex2.c` | Leitura de 5 valores reais e exibição na ordem inversa |
| `ex3.c` | Leitura de até 30 inteiros, encerrando com 0, e exibição dos valores lidos |
| `ex4.c` | Contagem de vogais e consoantes de uma palavra |

## Como executar

```bash
gcc ex1.c -o ex1
./ex1
```

No Windows, use `.\ex1.exe`. Os arquivos `ex3.c` e `ex4.c` usam `system("pause")` e `system("cls")`, e o `ex4.c` inclui `conio.h`, recursos disponíveis apenas no Windows.
