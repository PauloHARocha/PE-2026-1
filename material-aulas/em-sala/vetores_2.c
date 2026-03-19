#include<stdio.h>


int main(){
    // Crie um vetor com 7 posicoes
    // Leia valores numericos do usuario e preencha o vetor
    // Pra cada valor armazenado no vetor, 
    // calcule o dobro e armazene na mesma posicao

    int vetor[7];
    int soma_dobro = 0;

    // Pra cada valor armazenado no vetor, 
    // calcule o dobro e armazene na mesma posicao
    for(int i=0;i<7;i++){
        scanf("%d", &vetor[i]);
    }
    for(int i=0;i<7;i++){
        vetor[i] = vetor[i] * 2;
        soma_dobro = soma_dobro + vetor[i];
    }

    printf("Soma total: %d\n", soma_dobro);

    return 0;
}