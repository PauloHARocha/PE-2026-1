#include<stdio.h>

int main(){

    float notas[4];

    printf("Vetor notas[0]: %f\n", notas[0]);
    printf("Vetor notas[1]: %f\n", notas[1]);
    printf("Vetor notas[2]: %f\n", notas[2]);
    printf("Vetor notas[3]: %f\n", notas[3]);

    notas[0] = 8;
    notas[1] = 10;
    notas[2] = 5;
    notas[3] = 3;

    printf("Vetor notas[0]: %f\n", notas[0]);
    printf("Vetor notas[1]: %f\n", notas[1]);
    printf("Vetor notas[2]: %f\n", notas[2]);
    printf("Vetor notas[3]: %f\n", notas[3]);

    float soma = 0;
    int n = 4;
    for(int i = 0; i < n; i++){
        soma = soma + notas[i];
    }
    float media = soma/n;

    printf("Media: %.2f\n", media);

    return 0;
}