#include<stdio.h>

int main(){
    int v[4] = {5, 10, 2, 1};
    int m[2][2] = {
        {5, 10},
        {2, 1}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("m[%d][%d]: %d\n", i, j, m[i][j]);
        }
    }
    //Crie uma matriz q que vai conter o quadrado de 
    // cada elemento da matriz m
    int q[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            q[i][j] = m[i][j] * m[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("q[%d][%d]: %d\n", i, j, q[i][j]);
        }
    }

    return 0;
}