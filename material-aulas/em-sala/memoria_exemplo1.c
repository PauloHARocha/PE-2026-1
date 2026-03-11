#include<stdio.h>

int cria_variavel(){
    int x_2 = 20;
    // Segundo print
    printf("O valor de x: %d\n", x_2);
    printf("O endereco de x: %p\n", &x_2);
    return 20;
}

int main(){
    int x_1 = 10;
    // Primeiro print
    printf("O valor de x: %d\n", x_1);
    printf("O endereco de x: %p\n", &x_1);
    int x_3 = 50;
    x_1 = cria_variavel();
    // Terceiro print
    printf("O valor de x: %d\n", x_1);
    printf("O endereco de x: %p\n", &x_1);

    return 0;
}