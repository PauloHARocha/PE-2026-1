#include <stdio.h>
#include <string.h>

// strlen
// Retorna o tamanho de uma string (até o '\0')
// size_t strlen(char *texto);
// size_t: tipo inteiro sem sinal usado para representar tamanhos. (unsigned long)

int main() {
    char palavra[10] = "Unicap";

    printf("String: %s\n", palavra);
    printf("Tamanho (strlen): %d caracteres\n", (int) strlen(palavra));
    printf("Tamanho (sizeof): %d bytes\n\n", (int) sizeof(palavra));

    printf("Posição\tCaractere\tEndereço\n");

    for (int i = 0; i < strlen(palavra); i++) {
        printf("%d\t%c\t\t%p\n", i, palavra[i], &palavra[i]);
    }

    return 0;
}