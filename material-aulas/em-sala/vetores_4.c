#include<stdio.h>
// Crie um vetor com 7 posicoes
// Leia valores numericos do usuario e preencha o vetor
// Imprima o maior valor do vetor e sua posicao
int main(){
    int n = 7;
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int maior = v[0];
    int pos = 0;
    for(int i=1;i < n;i++){
        if(maior < v[i]){
            maior = v[i];
            pos = i;
        }
    }
    printf("O maior valor %d se encontra na posicao %d\n", maior, pos);
    return 0;
}