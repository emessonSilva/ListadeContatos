// Bibliotecas usadas para rodar o programa corretamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contato.h"
#include "cores.h"

// Criação da função de cadastrar contato no programa
void atualizarContato(Contato contatos[], int numContatos) {
    if (numContatos == 0) { //Essa linha verifica se o número de contatos é igual a zero (sem contatos).
        printf(VERMELHO "Nenhum contato cadastrado.\n" RESET);
        return; //Imprime esta mensagem caso não tenha contatos.
    }
    
    char nomeBusca[MAX_NOME];//Essa variável será usada para armazenar o nome do contato que o usuário deseja atualizar.
    getchar();
  //Imprime a mensagem
    printf("\nDigite o nome do contato que deseja atualizar: ");
    fgets(nomeBusca, MAX_NOME, stdin);//Pede pro usuário entrar com um valor.
    
  //Essa variável será usada para indicar se o contato a ser atualizado foi encontrado ou não.
    int contatoEncontrado = 0;
    for (int i = 0; i < numContatos; i++) {
      //Essa linha compara o nome do contato atual (contatos[i].nome) com o nome buscado (nomeBusca) utilizando a função strcmp. Se a comparação resultar em igualdade (retornando 0), significa que o nome do contato corresponde ao nome buscado.
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("Digite o novo nome: ");
            fgets(contatos[i].nome, MAX_NOME, stdin);
            
            printf("Digite o novo email: ");
            fgets(contatos[i].email, MAX_EMAIL, stdin); 
            
            printf("Digite o novo telefone: ");
            fgets(contatos[i].telefone, MAX_TELEFONE, stdin);
            
        printf(VERDE "Contato atualizado com sucesso!\n" RESET);
            contatoEncontrado = 1;//A variável contatoEncontrado é atualizada para 1 para indicar que o contato foi encontrado e atualizado.
            break;
        }
    }
//Essa linha verifica se a variável contatoEncontrado é igual a zero, indicando que nenhum contato correspondente foi encontrado durante o loop.
    if (!contatoEncontrado) {
        printf(VERMELHO "Contato não encontrado.\n" RESET);
    }
}


