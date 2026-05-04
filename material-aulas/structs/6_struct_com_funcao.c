#include <stdio.h>

struct pessoa {
    int idade;
    float altura;
};

void imprimir_pessoa(struct pessoa p) {
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
}

int main() {

    struct pessoa p1 = {25, 1.75};

    imprimir_pessoa(p1);

    return 0;
}

/*
Atividade
Crie uma struct chamada "Produto" com nome, preço e quantidade usando uma funcao cria_produto
Faça uma função valor_total que receba um Produto e retorne seu valor total (preço * quantidade).
*/