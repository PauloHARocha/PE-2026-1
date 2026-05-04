#include <stdio.h>
#include <string.h>

struct aluno {
    int matricula;
    char nome[40];
    float nota;
};

void alterar_int(int x) {
    x = 999;
}

void alterar_copia(struct aluno a) {
    a.nota = 10.0;
}

void alterar_original(struct aluno *a) {
    a->nota = 10.0;
}


void alterar_vetor(int v[]) {
    v[0] = 999;
}

int main() {

    // Exemplo int
    int x = 10;

    printf("int\n");
    printf("Antes: x = %d\n", x);

    alterar_int(x);
    printf("Depois: x = %d\n\n", x);

    // Exemplo vetor
    int v[3] = {1, 2, 3};

    printf("vetor\n");
    printf("Antes: v[0] = %d\n", v[0]);

    alterar_vetor(v);
    printf("Depois: v[0] = %d\n", v[0]);

    // Exemplo struct
    struct aluno a1;

    a1.matricula = 101;
    strcpy(a1.nome, "Ana");
    a1.nota = 8.5;

    printf("struct\n");
    printf("Nota inicial: %.2f\n", a1.nota);

    alterar_copia(a1);
    printf("Depois de alterar_copia: %.2f\n", a1.nota);

    alterar_original(&a1);
    printf("Depois de alterar_original: %.2f\n\n", a1.nota);

    return 0;
}