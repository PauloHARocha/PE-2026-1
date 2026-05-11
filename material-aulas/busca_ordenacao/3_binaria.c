#include <stdio.h>

// Busca Binária
// Funciona apenas em vetores ordenados.
// A cada passo, elimina metade do vetor.

int main() {

    int v[] = {1, 3, 5, 7, 9, 12, 15, 20}; // vetor ordenado

    int n = sizeof(v) / sizeof(v[0]);

    int x = 12; // valor procurado

    int ini = 0;
    int fim = n - 1;

    int pos = -1; // -1 = nao encontrado

    // enquanto ainda existir uma área válida de busca
    while (ini <= fim) {

        // posição central
        int meio = (ini + fim) / 2;

        // encontrou o valor
        if (v[meio] == x) {
            pos = meio;
            break;
        }

        // busca continua na metade direita
        else if (v[meio] < x) {
            ini = meio + 1;
        }

        // busca continua na metade esquerda
        else {
            fim = meio - 1;
        }
    }

    if (pos == -1) {
        printf("Nao encontrado.\n");
    }
    else {
        printf("Binaria: %d encontrado em v[%d].\n", x, pos);
    }

    return 0;
}