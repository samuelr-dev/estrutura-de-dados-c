# Trabalho - Vetores e Matrizes

Trabalho com dois exercícios que combinam funções `void`, menus e vetores de `struct`.

## Tópicos abordados

- Funções `void`, com e sem parâmetros
- Menu de opções com `switch`
- `struct` e vetor de `struct`
- Leitura de texto com `fgets`

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex1.c` | Menu com três funções sem retorno: cálculo da média de N valores, área de um cubo a partir da aresta e fatorial de um número |
| `ex2.c` | Cadastro de até 15 hamburguerias (nome, preço do hambúrguer e da cerveja), com funções para cadastrar, encontrar o estabelecimento com o combo mais barato e calcular o preço médio da cerveja na cidade |

## Como executar

```bash
gcc ex1.c -o ex1
./ex1
```

No Windows, use `.\ex1.exe`. Para o `ex2.c`, troque o nome do arquivo.

## Observações

- Os arrays usam tamanho fixo (por exemplo, `valores[100]` no `ex1.c` e `listaEst[15]` no `ex2.c`), em vez de arrays de tamanho variável (VLA), para manter compatibilidade com compiladores mais antigos.
- O `ex2.c` usa `setlocale(LC_ALL, "pt-BR.UTF-8")`, o que faz o `scanf("%f", ...)` esperar a vírgula como separador decimal (padrão brasileiro), em vez do ponto.