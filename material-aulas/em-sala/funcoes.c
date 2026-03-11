#include<stdio.h>

int funcaoB(int x){
    printf("(FuncaoB) Valor de x: %d\n", x);
    return x;
}
void funcaoA(){
    int x = 20;
    funcaoB(x);
    printf("(FuncaoA) Valor de x: %d\n", x);
}  
int main(){
    int x = 10;
    printf("(Main)Valor de x: %d\n", x);
    funcaoA();
    int i = 10;
    for(int i = 0; i < 2; i++){
        x++;
    }
    printf("(Main) Valor de i: %d\n", i);
    printf("(Main) Valor de x: %d\n", x);
    return 0;
}
