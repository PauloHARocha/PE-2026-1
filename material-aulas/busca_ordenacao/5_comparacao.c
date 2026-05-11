#include <stdio.h>
#include <time.h>

#define N 100000

// Comparação entre busca sequencial e busca binária.
//
// Busca sequencial: O(n)
// No pior caso, pode precisar percorrer todos os elementos.
//
// Busca binária: O(log n)
// A cada repetição, elimina metade do vetor.
// Para isso, o vetor precisa estar ordenado.

int main() {

    int n = N;
    int v[N];

    for (int i = 0; i < n; i++) {
        v[i] = i; // vetor ordenado
    }

    int x = n - 1; // valor procurado
    
    // Busca Sequencial
    int pos_seq = -1;

    clock_t t1 = clock();

    for (int i = 0; i < n; i++) {

        if (v[i] == x) {
            pos_seq = i;
            break;
        }
    }

    clock_t t2 = clock();

    float tempo_seq = (float)(t2 - t1) / CLOCKS_PER_SEC;

    // Busca Binária
    int pos_bin = -1;

    int ini = 0;
    int fim = n - 1;

    t1 = clock();

    while (ini <= fim) {

        int meio = (ini + fim) / 2;

        if (v[meio] == x) {
            pos_bin = meio;
            break;
        }

        else if (v[meio] < x) {
            ini = meio + 1;
        }

        else {
            fim = meio - 1;
        }
    }

    t2 = clock();

    float tempo_bin = (float)(t2 - t1) / CLOCKS_PER_SEC;

    printf("Posicao busca sequencial: %d\n", pos_seq);
    printf("Tempo busca sequencial: %.8f s\n\n", tempo_seq);

    printf("Posicao busca binaria: %d\n", pos_bin);
    printf("Tempo busca binaria: %.8f s\n", tempo_bin);

    return 0;
}