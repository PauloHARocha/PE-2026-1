#include<stdio.h>

// calcule o dobro de cada posicao 
// do vetor e armezene na posicao 
void dobro(int* a, int n){ // int a[]
    for(int i = 0; i < n; i++){
        a[i] = a[i]*2;
    }
}
// calcule a soma + 20 de cada posicao 
// do vetor e armezene na posicao 
// imprima o valor armazenado em cada posicao
void soma_20(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i] += 20;
        printf("v[%d]: %d\n", i, a[i]);
    }
}

int main(){
    int n = 5;
    int v[] = {10, 30, 20, 5, 2};

    printf("v: %p\n", v);
    // dobro(v, n);
    soma_20(v, n);

    // for(int i=0;i<n;i++){
    //     printf("v[%d]: %d | &v[%d]: %p\n", i, *(v + i), i, (v + i));
    // }

    return 0;
}