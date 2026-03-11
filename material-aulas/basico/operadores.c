#include <stdio.h>

/*
Operadores em C

Operadores são símbolos usados para realizar operações
sobre valores ou variáveis.

Existem vários tipos de operadores em C.
Os principais são:

1) Operadores aritméticos
2) Operadores relacionais
3) Operadores lógicos
4) Operadores de atribuição
*/

int main() {
    /*
    Operador de atribuição

    O operador = é usado para armazenar um valor em uma variável.

    int a = 10;
    significa que o valor 10 será armazenado na variável a.
    */

    int a = 10;
    int b = 3;

    /*
    Operadores aritméticos
    Usados para realizar operações matemáticas.
    */

    printf("Soma: %d\n", a + b);        // +
    printf("Subtracao: %d\n", a - b);   // -
    printf("Multiplicacao: %d\n", a * b); // *
    printf("Divisao inteira: %d\n", a / b); // /
    printf("Resto da divisao: %d\n", a % b); // %

    /*
    Operadores relacionais
    Usados para comparar valores.

    O resultado sempre será:
    1 é verdadeiro
    0 é falso
    */

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    /*
    Operadores lógicos

    São usados para combinar expressões lógicas.
    */

    printf("(a > 5) && (b > 1): %d\n", (a > 5) && (b > 1)); // AND
    printf("(a > 5) || (b > 10): %d\n", (a > 5) || (b > 10)); // OR
    printf("!(a > b): %d\n", !(a > b)); // NOT

    return 0;
}