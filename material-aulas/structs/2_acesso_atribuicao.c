#include <stdio.h>

struct produto {
    int codigo;
    float preco;
};

int main() {

    struct produto p1;

    p1.codigo = 101;
    p1.preco = 29.90;

    printf("Codigo: %d\n", p1.codigo);
    printf("Preco: %.2f\n", p1.preco);

    return 0;
}