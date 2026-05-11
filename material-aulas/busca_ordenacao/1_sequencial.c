#include <stdio.h>

// Busca Sequencial
// Percorre o vetor posição por posição até encontrar o valor.

int main() {

    int v[] = {8, 3, 10, 1, 7, 5, 3};

    int n = sizeof(v) / sizeof(v[0]);

    int x = 7; // valor procurado

    int pos = -1; // -1 = nao encontrado

    for (int i = 0; i < n; i++) {

        // verifica se encontrou o valor
        if (v[i] == x) {
            pos = i; // guarda a posição encontrada
            break;   // encerra a busca
        }
    }

    if (pos == -1){
        printf("Nao encontrado.\n");
    }
    else{
        printf("Sequencial: %d encontrado em v[%d].\n", x, pos);
    }
        

    return 0;
}