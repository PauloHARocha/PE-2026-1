#include <stdio.h>

    /*
    Estruturas de controle de fluxo

    Permitem controlar quais partes do programa serão executadas
    e quantas vezes um bloco de código será repetido.

    if / else  
        tomada de decisão
    for
        repetição com número definido de vezes
    while
        repetição enquanto uma condição for verdadeira
    */

int main() {
    int i, x = 5;

    /*
    A estrutura if é usada para executar um bloco de código
    apenas quando uma condição é verdadeira.

    Estrutura geral:

    if (condicao) {
        codigo executado se verdadeiro
    }
    else {
        codigo executado se falso
    }

    Aqui estamos verificando se x é maior que zero.
    */

    if (x > 0){
        printf("Positivo\n");
    }
    else{
        printf("Negativo ou zero\n");
    }

    /*
    O laço for é usado quando sabemos quantas vezes
    queremos repetir um bloco de código.

    Estrutura geral:

    for (inicializacao; condicao; atualizacao)

    Neste exemplo:

    i começa com valor 1
    o laço continua enquanto i <= 5
    a cada repetição i é incrementado
    */

    for (i = 1; i <= 5; i++){
        printf("%d ", i);
    }

    int j = 5;

    /*
    O laço while executa um bloco de código
    enquanto a condição especificada for verdadeira.

    Estrutura geral:

    while (condicao) {
        codigo
    }

    Neste caso o laço continua enquanto j for maior que zero.
    */

    while (j > 0) {
        printf("\nContagem: %d", j);
        j--; // j = j -1;
    }

    return 0;
}