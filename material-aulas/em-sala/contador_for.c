#include<stdio.h>

int main(){
    int n;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    for(int i = 0; i<=n; i++){
        printf("Contagem: %d\n", i);
    }
    printf("Contagem finalizada.\n");

    return 0;
}