#include <stdio.h>

    /*
    Declaração de variáveis

    Antes de usar uma variável em C, é necessário declará-la.
    A declaração informa ao compilador:

    - o tipo da variável
    - o nome da variável
    */

int main() {

    int x;   // apenas declaração
    // Após a declaração, podemos atribuir um valor à variável.
    x = 10;
    
    // Também é possível declarar e inicializar a variável na mesma linha.
    int y = 20;
    
    // Podemos declarar várias variáveis do mesmo tipo em uma única linha.
    int a, b, c;

    // Depois podemos atribuir valores separadamente.
    a = 1;
    b = 2;
    c = 3;

    // Também podemos declarar várias variáveis já com inicialização.

    int m = 5, n = 10;
    
    /*
    A inicialização também pode usar expressões.
    O valor será calculado antes de ser armazenado.
    */

    int soma = m + n;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("m = %d, n = %d\n", m, n);
    printf("soma = %d\n", soma);

    return 0;
}