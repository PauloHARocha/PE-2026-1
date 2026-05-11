# Busca Binária

# Pseudocódigo

```text
inicio = 0
fim = tamanho - 1

enquanto inicio <= fim faça

    meio = (inicio + fim) / 2

    se vetor[meio] == x então
        encontrou
        pare

    senão se x > vetor[meio] então
        inicio = meio + 1

    senão
        fim = meio - 1

fim enquanto
```


```text
Exemplo
vetor: [2 5 8 12 16 23 38 56]
valor procurado: 23
```