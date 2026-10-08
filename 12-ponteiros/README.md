# 12 - Ponteiros

Exercício sobre ponteiros e alocação dinâmica de memória com `malloc`, aplicados a uma `struct`.

## Tópicos abordados

- Ponteiros para `struct` (`aluno *ptr`)
- Alocação dinâmica de memória com `malloc` e liberação com `free`
- Verificação de falha de alocação (`NULL`)
- Passagem de ponteiros como parâmetro de função
- Acesso a membros de uma struct por ponteiro (`->`)
- Comparação de strings com `strcmp`

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex01.c` | Cadastro de 3 alunos (nome, RA, cidade e média), com cada aluno alocado dinamicamente, informando o nome dos que moram em Marília e o RA dos que têm média maior que 7 |

## Como executar

```bash
gcc ex01.c -o ex01
./ex01
```

No Windows, use `.\ex01.exe`.

Os valores decimais devem ser digitados com **vírgula**, não com ponto, por causa do `setlocale(LC_ALL, "pt-BR.UTF-8")` usado no arquivo.

## Observações

Cada aluno é alocado individualmente com `malloc(sizeof(aluno))`, e a memória de cada um é liberada com `free` ao final do programa.
