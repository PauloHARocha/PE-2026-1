#include <stdio.h>

/*
Entrada de strings com fgets

fgets:
- Lê uma linha inteira (inclui espaços)
- Lê até (n - 1) caracteres
- Adiciona '\0' no final
- Mantém o '\n' se couber no vetor
*/

int main() {

    char nome[40];

    printf("Digite seu nome completo: ");
    fgets(nome, 40, stdin);

    printf("Nome lido: \"%s\"\n", nome);

    // Removendo o '\n'
    for (int i = 0; i < 40; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }
    
    printf("Nome sem \\n: %s\n", nome);

    // Atividade
    // Leia um nome completo e imprima apenas o primeiro nome

    return 0;
}