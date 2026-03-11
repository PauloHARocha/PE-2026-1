#include <stdio.h>

/*
Funções em C

Uma função é um bloco de código que executa uma tarefa específica.

Estrutura geral:

tipo_retorno nome_da_funcao(parametros) {
    corpo da funcao
}

Componentes:

tipo_retorno
indica o tipo de valor que a função retorna.

nome_da_funcao
identificador usado para chamar a função.

parametros
valores que a função recebe para trabalhar.

corpo da funcao
código que será executado.
*/

int soma(int a, int b) {

    // Esta função recebe dois inteiros e retorna a soma.

    int resultado;

    resultado = a + b;

    return resultado;
    //return envia o valor calculado de volta para quem chamou a função.
}

int main() {

    int x = 4;
    int y = 6;
    int r;

    // Chamando a função soma
    // O valor retornado pela função é armazenado em r.
    r = soma(x, y);

    printf("Resultado: %d\n", r);

    return 0;
}