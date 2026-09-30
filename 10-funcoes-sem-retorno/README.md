# 10 - Funções sem Retorno

Exercício que trabalha funções `void`, que executam instruções mas não retornam valor para quem as chamou.

## Tópicos abordados

- Funções `void`, com parâmetros
- Passagem de matriz como parâmetro de função
- Estruturas de decisão e repetição dentro de funções

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex1.c` | Leitura de uma matriz de ordem definida pelo usuário (entre 1 e 5), com funções para exibir a matriz, encontrar o maior elemento, somar cada linha e localizar a posição do menor elemento |

## Como executar

```bash
gcc ex1.c -o ex1
./ex1
```

No Windows, use `.\ex1.exe`.

## Observações

O array usa tamanho fixo (`matriz[5][5]`), em vez de um array de tamanho variável (VLA), para manter compatibilidade com compiladores mais antigos.