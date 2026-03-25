#include<stdio.h>
// Crie um vetor com 7 posicoes
// Leia valores numericos do usuario e preencha o vetor
// Imprima o maior valor do vetor e sua posicao

void maior_valor(int a[], int n, int *maior_res, int* pos_res){
    int maior = a[0];
    int pos = 0;
    for(int i=1;i < n;i++){
        if(maior < a[i]){
            maior = a[i];
            pos = i;
        }
    }
    *maior_res = maior;
    *pos_res = pos;
}
int main(){
    int n = 7;
    int v[n];
    int maior, pos;
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    maior_valor(v, n, &maior, &pos);    
    printf("O maior valor %d esta na posicao %d", maior, pos);
    return 0;
}