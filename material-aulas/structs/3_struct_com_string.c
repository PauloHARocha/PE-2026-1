#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[40];
    int idade;
};

int main() {

    struct cadastro c1;

    strcpy(c1.nome, "Carlos");
    c1.idade = 20;

    printf("Nome: %s\n", c1.nome);
    printf("Idade: %d\n", c1.idade);

    return 0;
}

/*
Atividade
Crie uma struct chamada "Aluno" com os campos:
nome, curso e idade.
Leia os dados de um aluno e imprima.
*/