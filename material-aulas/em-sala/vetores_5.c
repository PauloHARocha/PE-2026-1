#include<stdio.h>

// calcule o dobro de cada posicao 
// do vetor e armezene na posicao 
// receber o vetor
void dobro(int* a, int n){ // int a[]
    for(int i = 0; i < n; i++){
        a[i] = a[i]*2;
    }
}
int main(){
    int n = 5;
    int v[] = {10, 30, 20, 5, 2};

    printf("v: %p\n", v);
    dobro(v, n);

    for(int i=0;i<n;i++){
        printf("v[%d]: %d | &v[%d]: %p\n", i, *(v + i), i, (v + i));
    }

    return 0;
}