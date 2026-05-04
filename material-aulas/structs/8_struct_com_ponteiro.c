#include <stdio.h>

struct ponto {
    int x;
    int y;
};

int main() {

    struct ponto p1 = {10, 20};

    struct ponto *ptr;

    ptr = &p1;

    printf("Usando a variavel:\n");
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);

    printf("\nUsando o ponteiro:\n");
    printf("x = %d\n", ptr->x);
    printf("y = %d\n", ptr->y);

    printf("\nEnderecos:\n");
    printf("&p1 = %p\n", &p1);
    printf("ptr = %p\n", ptr);
    printf("&p1.x = %p\n", &p1.x);
    printf("&p1.y = %p\n", &p1.y);

    return 0;
}