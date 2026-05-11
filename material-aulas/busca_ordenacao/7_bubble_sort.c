#include <stdio.h>

// Bubble Sort
// Compara elementos vizinhos e troca quando estão fora de ordem.
//
// Complexidade: O(n²)
// Para vetores grandes, tende a ser lento.

int main() {

    int v[] = {2, 8, 5, 3, 9, 4, 1};

    int n = sizeof(v) / sizeof(v[0]);

    int i, j, temp;

    // controla as passadas pelo vetor
    for (i = 0; i < n - 1; i++) {

        // compara pares vizinhos
        for (j = 0; j < n - i - 1; j++) { // o -i evita comparar novamente o final já ordenado

            if (v[j] > v[j + 1]) {

                // troca v[j] com v[j + 1]
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado (Bolha): ");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}