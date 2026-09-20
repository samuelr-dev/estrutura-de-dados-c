# 05 - Laço de Repetição `do-while`

Exercícios sobre repetição com condição de parada testada ao final de cada iteração, incluindo um programa com menu.

## Tópicos abordados

- Estrutura do laço `do-while`
- Múltiplas condições de parada
- Menu de opções com `switch`
- Fatorial e potenciação com laços

## Exercícios

| Arquivo | Descrição |
|---|---|
| `ex1.c` | Leitura de caracteres até a digitação de `$` ou até 35 repetições |
| `ex2.c` | Leitura de inteiros positivos até um valor não positivo, informando a quantidade lida e a soma |
| `ex3.c` | Menu com soma de dois valores, maior de três números, fatorial de X e potência a^b |

## Como executar

```bash
gcc ex1.c -o ex1
./ex1
```

No Windows, use `.\ex1.exe`. O `ex1.c` usa `conio.h` e o `ex3.c` usa `system("pause")` e `system("cls")`, recursos disponíveis apenas no Windows.
