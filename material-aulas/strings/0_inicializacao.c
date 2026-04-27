#include <stdio.h>

/*
- Uma string é um vetor de caracteres.
- Toda string termina com o caractere especial '\0'.
- Esse caractere indica o fim da string.

Exemplo:
"Oi": 'O' 'i' '\0'

Sem o '\0', o printf não sabe onde parar.
*/

int main() {
    char s1[] = "Unicap";
    char s2[10] = "C";
    char s3[] = {'G','C','C','\0'};

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    printf("\nPrimeiro caractere de s1: %c\n", s1[0]);
    printf("Segundo caractere de s1: %c\n", s1[1]);

    printf("\nPercorrendo s1:\n");
    for (int i = 0; s1[i] != '\0'; i++) {
        printf("%c\n", s1[i]);
    }

    return 0;
}