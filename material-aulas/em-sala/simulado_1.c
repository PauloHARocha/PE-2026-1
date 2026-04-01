#include <stdio.h>
// Desenvolva as funcoes:
// soma, media e menor_e_pos


// Questão 1
// Implemente a função soma, que recebe um vetor de valores 
// do tipo float (vendas mensais) e seu
// tamanho, e retorna a soma total das vendas ao longo dos meses.

float soma(float vendas[], int n){
    float soma_vendas = 0;
    for(int i = 0; i < n; i++){
         soma_vendas = soma_vendas + vendas[i];   
    }
    return soma_vendas;
}

// Questão 2
// Implemente a função media, que recebe a soma total das vendas 
// e a quantidade de meses, e retorna a média mensal de vendas.

float media(float soma_vendas, int n){
    float media_vendas = soma_vendas/n;
    return media_vendas;
    // return soma_vendas/n;
}

// Questão 3
// Implemente a função menor_e_pos, que recebe um vetor de valores 
// do tipo float (vendas mensais) e seu tamanho, encontra o menor valor 
// de vendas e determina a posição em que ele se encontra no vetor. 
// A função deve permitir obter tanto o menor valor quanto a 
// posição correspondente.

void menor_e_pos(float vendas[], int n, float* menor_venda, int* pos){
    *menor_venda = vendas[0];
    *pos = 0;
    for(int i=1;i<n;i++){
        if(vendas[i] < *menor_venda){
            *menor_venda = vendas[i];
            *pos = i;
        }
    }
}

int main() {
    
    float vendas[12] = {120.5, 89.9, 150.75, 80.25, 200.10, 110.60, 95.30, 130.80, 70.45, 160.90, 140.20, 100.15};
    int n = 12;
    float soma_vendas = soma(vendas, n);
    float media_vendas = media(soma_vendas, n);
    float menor_venda;
    int pos;
    menor_e_pos(vendas, n, &menor_venda, &pos);

    // Questão 4
    // Na função main, utilize as funções implementadas para calcular 
    // a soma total das vendas, calcular a média mensal, encontrar 
    // o menor valor de vendas e o mês correspondente, e imprimir:
    // Soma = ...
    // Media = ...
    // Menor valor em vendas = ...
    // Mes = ...
    printf("Soma = %.2f\n", soma_vendas);
    printf("Media = %.2f\n", media_vendas);
    printf("Menor valor em vendas = %.2f\n", menor_venda);
    printf("Mes = %d\n", pos + 1);

    // Desenvolva o restante do programa
    return 0;
}