#include<stdio.h>
// Crie um vetor com 5 posicoes
// Leia valores numericos do usuario e preencha o vetor
// Leia um novo valor numerico do usuario
// Verfique se o valor existe no vetor
// Se sim imprima "Valor encontrado"
// Se nao impriva "Valor não encontrado"
int main(){
    int n = 5;
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int valor, encontrado = 0;
    scanf("%d", &valor);
    for(int i=0;i < n;i++){
        if(valor == v[i]){
            encontrado = 1;
        }
    }
    if(encontrado == 1){
        printf("Valor encontrado.\n");
    }else{
        printf("Valor nao encontrado.\n");     
    }
        

    return 0;
}