#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "contato.h"
#include "cores.h"

//Criação da função de excluir contato no programa
void excluirContato(Contato contatos[], int numContatos) {

    if (numContatos == 0) {//Verifica se existem contatos.
        printf(VERMELHO "Nenhum contato cadastrado.\n" RESET);
        return;
    }
    
    char nomeExcluir[MAX_NOME]; //criação de variável para comparar o nome do contato
    printf("\nDigite o nome do contato a ser excluído:\n");
    getchar();
    fgets(nomeExcluir, sizeof(nomeExcluir), stdin);//entrada para verificar se o nome está na lista
    
    int i, j;
    int encontrado = 0;

    // Percorre a lista de contatos
    for (i = 0; i < numContatos; i++) {
        // Verifica se o nome do contato corresponde ao nome fornecido
        if (strcmp(contatos[i].nome, nomeExcluir) == 0)  {
            encontrado = 1;
        
            // Desloca os contatos à frente para preencher o espaço vazio
            for (j = i; j < numContatos - 1; j++) {
                contatos[j] = contatos[j + 1];
            }
            
            numContatos--; // Reduz o número de contatos após a exclusão
            printf(VERDE "Contato excluído com sucesso!\n" 
            RESET);
            break;
        }
    }

    // Verifica se o contato foi encontrado
    if (!encontrado) {
        printf(VERMELHO "Contato não encontrado!\n" RESET);
    }
}
