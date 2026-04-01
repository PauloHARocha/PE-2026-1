#include<stdio.h>

int calcular_triplo(int x){
    // x = x * 3;
    return x * 3;
}

int main(){

    int x, dobro, triplo, quadruplo;
    scanf("%d", &x);

    dobro = x * 2;

    if(x == 10){
        printf("x igual a 10\n");
    }else{
        if(x == 20){
            printf("x igual a 20\n");
        }else{
            printf("x nao e igual a 10 nem igual a 20\n");
        }
    }
    printf("O dobro de x e igual a : %d\n", dobro);

    triplo = calcular_triplo(x);

    printf("O triplo de x e igual a : %d\n", triplo);

    int* p;
    p = &x;
    quadruplo = *p * 4; 

    printf("O quadruplo de x e igual a : %d\n", quadruplo);

    float y = -1;
    while(y < 0){
        printf("Insira um numero: ");
        scanf("%f", &y);
    }
    printf("y e um numero positivo: %.2f\n", y);

    // 4 bytes = 4 * 5 = 20 bytes
    int vetor[5] = {2, 7, 8, 6, 1};
    for(int i = 0; i<5;i++){
        printf("O valor de v[%d]: %d\n", i, vetor[i]);
    }

    int matriz[2][2] = {
        {5, 2},
        {1, 30}
    };
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2;j++){
            printf("matriz[%d][%d]: %d\n", i,j, matriz[i][j]);
        }   
    }


    return 0;
