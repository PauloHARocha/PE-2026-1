#include <stdio.h>
#include <string.h>

struct produto {
    int codigo;
    char nome[40];
    float preco;
};

struct produto criar_produto(int codigo, char nome[], float preco) {

    struct produto p;

    p.codigo = codigo;
    strcpy(p.nome, nome);
    p.preco = preco;

    return p;
}

int main() {

    struct produto p1, p2;

    p1 = criar_produto(10, "Teclado", 99.90);

    printf("Codigo: %d\n", p1.codigo);
    printf("Nome: %s\n", p1.nome);
    printf("Preco: %.2f\n", p1.preco);

    p2 = criar_produto(10, "Teclado", 99.90);

    printf("Codigo: %d\n", p2.codigo);
    printf("Nome: %s\n", p2.nome);
    printf("Preco: %.2f\n", p2.preco);

    return 0;
}