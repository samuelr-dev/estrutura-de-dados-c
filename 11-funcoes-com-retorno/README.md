# 11 - Funções com Retorno

Exercício sobre funções que retornam um valor para quem as chamou, diferente das funções `void` da pasta anterior.

## Tópicos abordados

- Funções com tipo de retorno (`int`, `long long`)
- Uso do valor retornado por uma função principal (`main`)
- Validação de parâmetro negativo dentro da própria função

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex01.c` | Duas funções com retorno: fatorial de X e soma dos inteiros positivos até N, com X e N recebidos como parâmetro |

## Como executar

```bash
gcc ex01.c -o ex01
./ex01
```

No Windows, use `.\ex01.exe`.

Os valores decimais, quando houver, devem ser digitados com **vírgula**, não com ponto, por causa do `setlocale(LC_ALL, "pt-BR.UTF-8")` usado no arquivo.

## Observações

- A função `factorial` usa `long long` como tipo de retorno, para comportar fatoriais um pouco maiores sem estourar a faixa de valores de um `int`.
- Para X ou N negativos, as funções não calculam nada: `factorial` retorna `-1` (valor usado pelo `main` para identificar a entrada inválida e exibir uma mensagem) e `sumUpToN` retorna `0`, como pede o enunciado.
