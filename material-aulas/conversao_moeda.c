#include<stdio.h>

int main(){
    float valor_real, valor_dolar, cotacao_dolar = 5.3;

    printf("Insira o valor em Real: ");
    scanf("%f", &valor_real);

    valor_dolar = valor_real/cotacao_dolar;

    printf("Valor convertido em dólar: %.2f\n", valor_dolar);


    return 0;
}