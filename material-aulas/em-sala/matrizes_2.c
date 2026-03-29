#include<stdio.h>

int main(){
    float m[3][3] = {
        {2, 5, 7},
        {10, 8, 3},
        {1, 6, 4}
    };
    // imprimir a soma da diagonal principal de m
    float soma = 0;
    for(int i = 0; i < 3;i++){
        soma = soma + m[i][i];
    }
    printf("A soma e igual a: %.2f\n", soma);
    return 0;
}