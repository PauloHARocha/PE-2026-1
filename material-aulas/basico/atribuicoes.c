#include <stdio.h>

/*
Atribuição em C

O operador de atribuição (=) é usado para armazenar um valor em uma variável.

A estrutura geral é:

variavel = valor;

O valor do lado direito é calculado primeiro e depois armazenado
na variável do lado esquerdo.

Exemplo:

x = 10;

significa:
- o valor 10 será armazenado na variável x
*/

int main() {

    /*
    Primeiro declaramos as variáveis.
    Quando declaramos uma variável, reservamos um espaço na memória
    para armazenar um valor daquele tipo.
    */
    int x;
    int y;
    /*
    A seguir estamos atribuindo o valor 5 para a variável x.
    Antes:
    x tem valor indefinido
    Depois:
    x recebe 5
    */
    x = 5;

    /*
    Agora o valor de x é copiado para y.
    Isso NÃO faz com que y "aponte" para x.
    Apenas copia o valor armazenado.
    x = 5
    y = 5
    */
    y = x;

    /*
    Agora mudamos apenas o valor de x.

    x = 20
    y continua sendo 5

    Porque y recebeu apenas uma cópia do valor anterior.
    */
    x = 20;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}