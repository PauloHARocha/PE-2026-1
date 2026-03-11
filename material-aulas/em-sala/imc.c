#include<stdio.h>

int main(){
    float peso, altura, imc;

    printf("Insira o peso: ");
    scanf("%f", &peso);

    printf("Insira a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("IMC abaixo do peso.\n");
    }else{
        if(imc < 25){
            printf("IMC na media.\n");
        }else{
            printf("IMC acima do peso.\n");
        }
    }

    return 0;
}