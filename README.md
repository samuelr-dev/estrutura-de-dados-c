# Estrutura de Dados em C

Exercícios em linguagem C da disciplina de Estrutura de Dados do curso de Bacharelado em Ciência da Computação. O conteúdo parte dos fundamentos da linguagem (entrada e saída, condicionais e laços de repetição) e avança para vetores, matrizes, structs e funções.

O repositório é atualizado conforme a disciplina avança.

## Conteúdo

| Pasta | Tema | Exercícios |
|---|---|---|
| [01-introducao-linguagem-c](./01-introducao-linguagem-c) | Variáveis, entrada e saída, operadores e fórmulas | 7 |
| [02-estruturas-condicionais](./02-estruturas-condicionais) | `if`, `else if` e `else` | 5 |
| [03-laco-de-repeticao-for](./03-laco-de-repeticao-for) | Laço `for` | 4 |
| [04-laco-de-repeticao-while](./04-laco-de-repeticao-while) | Laço `while` | 4 |
| [05-laco-de-repeticao-do-while](./05-laco-de-repeticao-do-while) | Laço `do-while` e menu com `switch` | 3 |
| [06-vetores](./06-vetores) | Vetores e strings | 4 |
| [07-matrizes](./07-matrizes) | Matrizes | 3 |
| [08-structs](./08-structs) | Structs | 1 |
| [09-vetores-de-structs](./09-vetores-de-structs) | Vetores de structs | 2 |
| [10-funcoes-sem-retorno](./10-funcoes-sem-retorno) | Funções `void` com matriz como parâmetro | 1 |

## Trabalhos

Atividades avaliativas com mais de um exercício por entrega, organizadas em `trabalhos/`, com a mesma estrutura de README das demais pastas.

| Pasta | Tema | Exercícios |
|---|---|---|
| [trabalhos/vetores-e-matrizes](./trabalhos/vetores-e-matrizes) | Funções `void`, menu com `switch` e vetor de `struct` | 2 |

## Requisitos

- Compilador C, como o GCC (no Windows, por meio do MinGW-w64)
- Windows, para os exercícios que usam recursos específicos do sistema (veja as observações abaixo)

## Como compilar e executar

Cada exercício é um arquivo `.c` independente, com o enunciado em um comentário no início. A partir da pasta do exercício:

```bash
cd 01-introducao-linguagem-c
gcc ex1.c -o ex1
./ex1
```

No Windows, execute o programa com `.\ex1.exe` (PowerShell) ou `ex1` (Prompt de Comando). Nos exercícios que usam `math.h`, em Linux e macOS acrescente `-lm` ao comando de compilação. O compilador pode emitir avisos, como o tipo de retorno de `main`, que não impedem a execução.

Nos exercícios que usam `setlocale(LC_ALL, "pt-BR.UTF-8")` (veja as observações abaixo), os valores decimais devem ser digitados com **vírgula**, não com ponto.

## Estrutura

Cada pasta contém um `README.md` com a descrição dos exercícios e os arquivos `ex1.c`, `ex2.c` e assim por diante, na ordem da lista.

## Observações sobre o desenvolvimento

- Os exercícios foram desenvolvidos localmente ao longo do semestre, sem controle de versão. O repositório foi criado depois, para organizar e publicar o material. Por isso, o histórico de commits reflete a organização do conteúdo, e não a ordem em que os exercícios foram escritos.
- Cada exercício está em um único arquivo `.c`. As pastas foram renomeadas (sem acentos e com numeração de dois dígitos) para facilitar o uso em qualquer sistema.
- Antes da publicação, foram corrigidos erros pontuais, sem alterar a proposta dos exercícios: variáveis não inicializadas (`01/ex1`, `04/ex2` e `09/ex1`), o `&` ausente no `scanf` de `01/ex4`, um trecho de código duplicado em `04/ex2`, os campos da agenda em `09/ex2`, que precisavam ser vetores de `char`, e o rótulo de uma mensagem em `09/ex1`.
- Nas pastas `10-funcoes-sem-retorno` e `trabalhos/vetores-e-matrizes`, os arrays usam tamanho fixo (por exemplo, `matriz[5][5]`, `valores[100]` e `listaEst[15]`), em vez de arrays de tamanho variável (VLA), para manter compatibilidade com compiladores mais antigos.
- Os exercícios de `trabalhos/vetores-e-matrizes` que leem valores decimais usam `setlocale(LC_ALL, "pt-BR.UTF-8")`, o que faz o `scanf("%f", ...)` esperar a vírgula como separador decimal (padrão brasileiro), em vez do ponto.
- Alguns exercícios foram escritos para Windows: `04/ex1`, `05/ex1` e `06/ex4` usam `conio.h`, e `05/ex3`, `06/ex3`, `06/ex4` e `07/ex1` a `07/ex3` usam `system("pause")` e `system("cls")`, que não existem em outros sistemas.
- Os exercícios `01/ex7`, `06/ex4`, `08/ex1`, `09/ex1` e `09/ex2` usam a função `gets()`, considerada insegura e removida do padrão C11. Em compiladores mais recentes, ela pode não estar disponível.

## Autor

Samuel Rodrigues