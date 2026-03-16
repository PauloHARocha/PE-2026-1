#include <stdio.h>

int main() {
    int x = 5;
    int* p;
    p = &x;
    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("&p = %p (endereco)\n", &p);
    printf("p = %p (valor)\n", p);
    printf("*p = %d (valor naquele endereco)\n", *p);

    *p = 20;

    printf("x apos alteracao via ponteiro = %d\n", x);

    return 0;
}