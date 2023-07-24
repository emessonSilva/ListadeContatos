#include <stdio.h>
#include <string.h>
#include  "contato.h"
#include "cores.h"

// Criação da função de cadastrar contato no programa
void listarContatos(Contato contatos[], int numContatos) {
    printf("\n   Contatos   \n\n");
    char nome[MAX_NOME];

  // Inicia um loop for para iterar sobre o vetor de contatos. A variável i é inicializada com 0, e o loop continuará enquanto i for menor que numContatos. A cada iteração, o valor de i é incrementado.
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {//Essa linha compara o nome do contato atual (contatos[i].nome) com a variável nome utilizando a função .
            printf(VERMELHO "Lista vazia!\n" RESET);
            continue; // Pula a iteração se o nome corresponder ao contato excluído
        }
        //Imprime na tela os resultados
        printf("Nome: %s", contatos[i].nome);
        printf("Telefone: %s", contatos[i].telefone);
        printf("Email: %s", contatos[i].email);
        printf("\n");
    }
}
