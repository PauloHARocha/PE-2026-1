#include<stdio.h>

float somar(float n1, float n2){
    return n1 + n2;
}

void imprimir_encerramento(int variavel){
    printf("Programa encerrado! Fim! %d\n", variavel);
}


int main(){
    float n1, n2;
    n1 = 10.5;
    n2 = 5;
    printf("soma igual a: %.2f\n", somar(n1, n2));

    n1 = 5.5;
    n2 = 20;
    printf("soma igual a: %.2f\n", somar(n1, n2));

    int teste = 5;
    imprimir_encerramento(teste);

    return 0;
}