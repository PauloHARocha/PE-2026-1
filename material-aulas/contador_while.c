#include<stdio.h>

int main(){
    int n, i = 0;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while(i <= n){
        printf("Contagem: %d\n", i);
        i++;
    }
    printf("Contagem finalizada.\n");

    return 0;
}