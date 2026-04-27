#include <stdio.h>
#include <string.h>

// strcat
// Concatena (junta) o conteúdo da string origem ao final da string destino
// char *strcat(char *destino, const char *origem);
// destino deve ter espaço suficiente para receber o texto final

int main() {
    char a[40] = "Bom ";
    char b[20] = "dia";

    printf("Antes da concatenação:\n");
    printf("a = \"%s\"\n", a);
    printf("b = \"%s\"\n\n", b);

    strcat(a, b);  // adiciona o conteúdo de b ao final de a

    printf("Depois da concatenação:\n");
    printf("a = \"%s\"\n", a);
    printf("b = \"%s\"\n", b);

    // Atividade
    // Leia duas frases (a e b).
    // Construa c = "a b" usando strcpy e strcat, e imprima c.

    return 0;
}