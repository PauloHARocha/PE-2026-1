#include <stdio.h>

/*
Tipos de dados em C

O tipo define:
- quanto espaço na memória será usado
- que tipo de valor pode ser armazenado

Tipos básicos da linguagem
*/

int main() {

    char letra = 'A';
    int numero = 10;
    float decimal = 3.14;
    double grande = 3.1415926535;

    /*
    char
    armazena um caractere
    normalmente ocupa 1 byte
    */

    /*
    int
    armazena números inteiros
    geralmente ocupa 4 bytes
    */

    /*
    float
    armazena números reais (ponto flutuante)
    precisão simples
    geralmente 4 bytes
    */

    /*
    double
    armazena números reais com maior precisão
    geralmente 8 bytes
    */

    printf("char: %c\n", letra);
    printf("int: %d\n", numero);
    printf("float: %f\n", decimal);
    printf("double: %lf\n", grande);

    /*
    Podemos descobrir quantos bytes cada tipo usa
    com o operador sizeof
    */

    printf("\nTamanho dos tipos:\n");
    printf("char: %lu bytes\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));

    return 0;
}