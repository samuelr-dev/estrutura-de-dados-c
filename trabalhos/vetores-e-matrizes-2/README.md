# Trabalho - Vetores e Matrizes 2

Trabalho com quatro exercícios sobre vetores, passagem de parâmetros por referência, cálculo de médias e um cadastro com busca e filtro por meio de um menu.

## Tópicos abordados

- Passagem de vetores como parâmetro de função
- Passagem de parâmetro por referência com ponteiro (`float *mediaTurma`)
- Funções `void`, com e sem retorno por ponteiro
- Busca do maior valor e de elementos acima da média em um vetor
- `struct`, vetor de `struct` e passagem de struct por valor
- Leitura de texto com `fgets` e remoção da quebra de linha com `strcspn`
- Busca em vetor de `struct` por um campo (`strcmp`) e menu com `switch`

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex01.c` | Troca dos valores entre dois vetores de dimensão 8 |
| `ex02.c` | Notas de 3 turmas (inglês, alemão e francês) de 10 alunos cada, com a média de cada turma e a(s) turma(s) de maior e menor média |
| `ex03.c` | Leitura de 50 valores reais, soma dos elementos acima da média e posição do maior valor |
| `ex04.c` | Cadastro de 20 funcionários (CPF, nome, idade, sexo e salário), com menu para buscar por CPF e listar os que ganham acima da média salarial |

## Como executar

```bash
gcc ex01.c -o ex01
./ex01
```

No Windows, use `.\ex01.exe`. Troque o nome do arquivo para rodar cada exercício.

Os exercícios que leem valores decimais usam `setlocale(LC_ALL, "pt-BR.UTF-8")`, o que faz o `scanf("%f", ...)` esperar a vírgula como separador decimal (padrão brasileiro), em vez do ponto.

## Observações

- O array de funcionários do `ex04.c` usa tamanho fixo (`t_funcionario lista[20]`), e o CPF é lido com `scanf("%14s", ...)`, limitando a entrada ao tamanho do campo (`char cpf[15]`) para não ultrapassar o buffer.
- No `ex03.c`, a soma dos elementos acima da média estava, originalmente, comparando cada valor com a sua própria posição no vetor (`vet[i] > i`) em vez de com a média calculada. Foi corrigido para `vet[i] > media`.
- Dois trechos com acentuação corrompida (`"MÉDIAS"` no `ex02.c` e `"Salário"` no `ex04.c`) foram corrigidos; o texto do programa não muda, só a exibição correta do acento.